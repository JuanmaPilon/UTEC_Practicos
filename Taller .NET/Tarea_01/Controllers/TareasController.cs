using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Tarea_01.Models;

namespace Tarea_01.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class TareasController : ControllerBase
    {
        private static List<Tarea> tareas = new List<Tarea>
        {
            new Tarea { Id = 1, Nombre = "Tarea 1", Descripcion = "La tarea 1", DuracionHoras = 1, Responsable = "Juansito", Fecha = DateTime.Now },
            new Tarea { Id = 2, Nombre = "Tarea 2", Descripcion = "La tarea 2", DuracionHoras = 2, Responsable = "Pedrito", Fecha = DateTime.Now}
        };

        [HttpGet]
        public ActionResult<IEnumerable<Tarea>> GetTareas() // todas
        { return Ok(tareas); }

        [HttpGet("{id}")]
        public ActionResult<Tarea> GetTarea(int id) // por id
        {  return Ok(tareas[id]); }

        [HttpPost]
        public ActionResult<Tarea> CreateTarea(Tarea nuevaTarea) // una nueva
        {
            nuevaTarea.Id = tareas.Max(x => x.Id) + 1;
            tareas.Add(nuevaTarea);
            return Ok(tareas);
        }

        [HttpDelete("{id}")]
        public ActionResult DeleteTarea(int id) // borrar
        {
            var tareaPorId = tareas.Find(x => x.Id == id);
            if (tareaPorId == null)
            {
                return NotFound();
            }
            tareas.Remove(tareaPorId);
            return Ok(tareas);
        }
    }
}
