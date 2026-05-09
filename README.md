<div align="center">

<img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="120" alt="C++ Logo"/>

# Cpp_tutorial

**Una guía progresiva y estructurada para dominar C++ desde los fundamentos hasta el nivel experto.**

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Standard](https://img.shields.io/badge/Estándar-C%2B%2B17-blue?style=for-the-badge)
![License](https://img.shields.io/badge/Licencia-MIT-2da44e?style=for-the-badge)
![Status](https://img.shields.io/badge/Estado-En%20construcción-orange?style=for-the-badge)

</div>

---

## ¿Qué es C++?

C++ es un lenguaje de programación de propósito general, compilado y de tipado estático, que extiende al lenguaje C añadiéndole soporte para la programación orientada a objetos, programación genérica y programación funcional. Fue diseñado por **Bjarne Stroustrup** a partir de 1979 en los laboratorios Bell de AT&T, con la filosofía de que debía ser un lenguaje que permitiera escribir programas eficientes, elegantes y mantenibles sin sacrificar el control de bajo nivel que ofrece C.

A diferencia de lenguajes como Python o JavaScript, C++ compila directamente a código máquina, lo que le otorga un rendimiento extraordinario y un control preciso sobre la memoria y los recursos del sistema. Esta característica lo convierte en la opción preferida en dominios donde el rendimiento es crítico: motores de videojuegos, sistemas operativos, compiladores, bases de datos, software de tiempo real, inteligencia artificial de alta performance y aplicaciones de sistemas embebidos.

El lenguaje adopta una filosofía de **"zero-overhead abstractions"**: las abstracciones que provee no tienen costo en tiempo de ejecución si no se utilizan. Esto significa que el programador puede trabajar con conceptos de alto nivel como clases, plantillas o funciones lambda, y el compilador se encargará de producir código tan eficiente como si se hubiera escrito a bajo nivel manualmente.

A lo largo de los años, C++ ha evolucionado significativamente a través de sus estándares ISO. Desde C++98 —el primero en ser estandarizado— hasta C++23, cada versión ha introducido mejoras sustanciales en seguridad, expresividad y modernidad: semántica de movimiento, punteros inteligentes, lambdas, rangos, módulos, conceptos y corrutinas son solo algunas de las características que han transformado al lenguaje en una herramienta moderna sin perder su esencia.

Hoy en día, C++ figura consistentemente entre los primeros cinco lenguajes más utilizados en el mundo según índices como TIOBE y el Stack Overflow Developer Survey, y sigue siendo irreemplazable en industrias donde el rendimiento, la portabilidad y el control son fundamentales.

---

## ¿Por qué aprender C++?

| Razón | Detalle |
|---|---|
| 🚀 **Rendimiento** | Se ejecuta directamente en hardware. Ideal para sistemas donde cada milisegundo importa. |
| 🧠 **Comprensión profunda** | Enseña cómo funciona realmente la memoria, los punteros y el sistema operativo. |
| 🎮 **Videojuegos** | Motores como Unreal Engine, Unity (core) y casi toda la industria AAA usan C++. |
| 🤖 **Inteligencia Artificial** | TensorFlow, PyTorch y OpenCV tienen su núcleo escrito en C++. |
| 💼 **Empleabilidad** | Es uno de los lenguajes mejor pagados y más demandados en ingeniería de software. |
| 🌐 **Ubiquidad** | Sistemas operativos (Windows, Linux), navegadores (Chrome, Firefox) y bases de datos (MySQL, MongoDB) están escritos en C++. |

---

## Primer programa en C++

El siguiente ejemplo muestra la estructura mínima de un programa en C++. Analizar este fragmento permite entender tres conceptos clave del lenguaje: las directivas de preprocesador (`#include`), el espacio de nombres estándar (`std`) y la función de entrada `main`, que es el punto de inicio de todo programa C++.

```cpp
// Mi primer programa en C++
#include <iostream>   // Librería de entrada/salida estándar

int main() {
    std::cout << "¡Hola, mundo!" << std::endl;
    return 0;         // 0 indica que el programa terminó exitosamente
}
```

> **Compilar y ejecutar:**
> ```bash
> g++ -std=c++17 -o hola main.cpp
> ./hola
> ```

---

## 🗺️ Roadmap de aprendizaje

## 📂 Estructura del repositorio

```
Cpp_tutorial/
│
├── Basico/              # Nivel 1: sintaxis, tipos, control de flujo, funciones, arrays
├── Intermedio/          # Nivel 2: punteros, STL básica, estructuras, recursividad
├── Avanzado/            # Nivel 3: POO, memoria, STL completa, algoritmos, templates
│
├── .gitignore
└── README.md
```

> ⚠️ El repositorio está en construcción activa. Las carpetas `Intermedio/` y `Avanzado/` se irán poblando conforme avance el progreso.

---

## ⚙️ Requisitos

- Compilador compatible con **C++17** o superior
  - Linux / macOS: `g++` (GCC) o `clang++`
  - Windows: MinGW-w64, MSVC o WSL con GCC
- Editor recomendado: Visual Studio Code con la extensión C/C++ de Microsoft

---

## ▶️ Cómo compilar y ejecutar

```bash
# 1. Clonar el repositorio
git clone https://github.com/kevinjv2/Cpp_tutorial.git
cd Cpp_tutorial

# 2. Navegar a la carpeta deseada
cd Basico/

# 3. Compilar un archivo
g++ -std=c++17 -Wall -o output archivo.cpp

# 4. Ejecutar
./output
```

> La flag `-Wall` activa todos los warnings del compilador. Se recomienda siempre usarla para escribir código más limpio y seguro.

---

## 🤝 Contribuciones

Las contribuciones son bienvenidas. Si encuentras un error, tienes una mejora o quieres agregar un ejemplo:

1. Haz un **fork** del repositorio
2. Crea una rama: `git checkout -b feature/descripcion`
3. Realiza tus cambios y haz commit: `git commit -m "Agrega: descripción del cambio"`
4. Sube tu rama: `git push origin feature/descripcion`
5. Abre un **Pull Request** describiendo qué cambiaste y por qué

---

## 👤 Autor

**Kevin Ramón Jacobo Sánchez**

[![GitHub](https://img.shields.io/badge/@kevinjv2-181717?style=flat-square&logo=github&logoColor=white)](https://github.com/kevinjv2)

---

## 📄 Licencia

Este proyecto está bajo la licencia **MIT**. Puedes usar, copiar, modificar y distribuir el contenido con la única condición de mantener el crédito al autor original.

---

<div align="center">
  <sub>Hecho con dedicación por Kevin Ramón Jacobo Sánchez · 2026</sub>
</div>
