using System;
using System.Collections.Generic;
using System.Linq;
using Microsoft.AspNetCore.Mvc;
using Tarea_03.Models;

namespace Tarea_03.Controllers
{
    public class LibroController : Controller
    {
        private static List<Libro> libros = new List<Libro>
        {
            new Libro { ISBN = "978-3-16-148410-0", Titulo = "Libro 1", Autor = "Autor 1", FechaPublicacion = new DateTime(2020, 1, 1) },
            new Libro { ISBN = "978-1-234-56789-7", Titulo = "Libro 2", Autor = "Autor 2", FechaPublicacion = new DateTime(2021, 2, 2) }
        };

        // GET: Libro
        public IActionResult Index()
        {
            return View(libros);
        }

        // GET: Libro/Details/5
        public IActionResult Details(string id)
        {
            var libro = libros.FirstOrDefault(l => l.ISBN == id);
            if (libro == null)
            {
                return NotFound();
            }
            return View(libro);
        }

        // GET:  /Create
        public IActionResult Create()
        {
            return View();
        }

        // POST: Libro/Create
        [HttpPost]
        [ValidateAntiForgeryToken]
        public IActionResult Create([Bind("ISBN,Titulo,Autor,FechaPublicacion")] Libro libro)
        {
            if (ModelState.IsValid)
            {
                libros.Add(libro);
                return RedirectToAction(nameof(Index));
            }
            return View(libro);
        }

        // GET: Libro/Edit/5
        public IActionResult Edit(string id)
        {
            var libro = libros.FirstOrDefault(l => l.ISBN == id);
            if (libro == null)
            {
                return NotFound();
            }
            return View(libro);
        }

        // POST: Libro/Edit/5
        [HttpPost]
        [ValidateAntiForgeryToken]
        public IActionResult Edit(string id, [Bind("ISBN,Titulo,Autor,FechaPublicacion")] Libro libro)
        {
            var libroExistente = libros.FirstOrDefault(l => l.ISBN == id);
            if (libroExistente == null)
            {
                return NotFound();
            }

            if (ModelState.IsValid)
            {
                libroExistente.Titulo = libro.Titulo;
                libroExistente.Autor = libro.Autor;
                libroExistente.FechaPublicacion = libro.FechaPublicacion;
                return RedirectToAction(nameof(Index));
            }
            return View(libro);
        }

        // GET: Libro/Delete/5
        public IActionResult Delete(string id)
        {
            var libro = libros.FirstOrDefault(l => l.ISBN == id);
            if (libro == null)
            {
                return NotFound();
            }
            return View(libro);
        }

        // POST: Libro/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public IActionResult DeleteConfirmed(string id)
        {
            var libro = libros.FirstOrDefault(l => l.ISBN == id);
            if (libro != null)
            {
                libros.Remove(libro);
            }
            return RedirectToAction(nameof(Index));
        }
    }
}
