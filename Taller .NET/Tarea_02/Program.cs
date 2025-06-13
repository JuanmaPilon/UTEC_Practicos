using System.Threading;

var builder = WebApplication.CreateBuilder(args);

// Add services to the container.

builder.Services.AddControllers();
// Learn more about configuring Swagger/OpenAPI at https://aka.ms/aspnetcore/swashbuckle
builder.Services.AddEndpointsApiExplorer();
builder.Services.AddSwaggerGen();

var app = builder.Build();

// Configure the HTTP request pipeline.
if (app.Environment.IsDevelopment())
{
    app.UseSwagger();
    app.UseSwaggerUI();
}

app.UseHttpsRedirection();

//primero simular la memoria

var tareas = new List<Tarea>
{
    new Tarea { Id = 1, Nombre = "Tarea 1", Descripcion = "La tarea 1", DuracionHoras = 1, Responsable = "Juansito", Fecha = DateTime.Now },
    new Tarea { Id = 2, Nombre = "Tarea 2", Descripcion = "La tarea 2", DuracionHoras = 2, Responsable = "Pedrito", Fecha = DateTime.Now }
};

app.UseAuthorization();

app.MapControllers();

app.MapGet("/api/tareas", () => tareas); // todas

app.MapGet("/api/tareas/{id:int}", (int id) => // por id
{
    var tarea = tareas.FirstOrDefault(t => t.Id == id);
    return tarea is not null ? Results.Ok(tarea) : Results.NotFound();
});

app.MapPost("/api/tareas", (Tarea nuevaTarea) => // agregar
{
    nuevaTarea.Id = tareas.Max(t => t.Id) + 1;
    nuevaTarea.Fecha = DateTime.Now;
    tareas.Add(nuevaTarea);
    return Results.Created($"/api/tareas/{nuevaTarea.Id}", nuevaTarea);
});

app.MapDelete("/api/tareas/{id:int}", (int id) => // deletear
{
    var tarea = tareas.FirstOrDefault(t => t.Id == id);
    if (tarea is not null)
    {
        tareas.Remove(tarea);
        return Results.NoContent();
    }
    return Results.NotFound();
});

app.Run();
record Tarea // declarar datos
{
    public int Id { get; set; }
    public string Nombre { get; set; }
    public string Descripcion { get; set; }
    public double DuracionHoras { get; set; }
    public string Responsable { get; set; }
    public DateTime Fecha { get; set; }
}