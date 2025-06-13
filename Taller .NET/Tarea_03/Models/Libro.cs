using System.ComponentModel.DataAnnotations;

namespace Tarea_03.Models
{
    public class Libro
    {
        [Key]
        public string ISBN { get; set; }
        public string Titulo { get; set; }
        public string Autor { get; set; }

        public DateTime FechaPublicacion { get; set; }

    }

}
