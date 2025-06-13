using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using Tarea_03.Models;

namespace Tarea_03.Data
{
    public class Tarea_03Context : DbContext
    {
        public Tarea_03Context (DbContextOptions<Tarea_03Context> options)
            : base(options)
        {
        }

        public DbSet<Tarea_03.Models.Libro> Libro { get; set; } = default!;
    }
}
