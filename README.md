# Laboratorio de Electrónica Digital II G3 Y G4
**Semestre 2026-1**

Repositorio oficial del curso **Laboratorio de Electrónica Digital II**, asociado a la asignatura de Electrónica Digital II.  
Aquí se publicarán guías, lineamientos, cronograma y material de apoyo para el desarrollo de las prácticas de laboratorio.


## 📌 Contenido
- [Introducción](#introducción)
- [Docente de laboratorio](#docente-de-laboratorio)
- [Metodología de trabajo](#metodología-de-trabajo)
- [Cronograma](#cronograma)
- [Entregables y documentación](#entregables-y-documentación)
- [Criterios de evaluación](#criterios-de-evaluación)
- [Normas generales del laboratorio](#normas-generales-del-laboratorio)
- [Herramientas de trabajo](#herramientas-de-trabajo)
- [Canales de comunicación](#canales-de-comunicación)

---

## Introducción

El **Laboratorio de Electrónica Digital II** es un espacio académico orientado al **diseño, verificación e implementación de sistemas digitales**, en coherencia con el enfoque metodológico desarrollado en la asignatura magistral.

A lo largo del curso, el laboratorio acompañará al estudiante en la aplicación práctica del **flujo de diseño digital**, abordando los sistemas desde niveles de abstracción altos hasta su implementación, privilegiando metodologías estructuradas y el uso de herramientas modernas de automatización.

Las prácticas de laboratorio están diseñadas para que el estudiante:
- Analice un problema a partir de sus **especificaciones funcionales**.
- Proponga una **arquitectura de solución**.
- Modele el sistema mediante **máquinas de estados y descripciones RTL**.
- Verifique su funcionamiento mediante **simulación**.
- Documente rigurosamente el proceso de diseño y sus resultados.

El laboratorio enfatiza el **aprendizaje basado en problemas**, el trabajo colaborativo y la correcta articulación entre teoría y práctica, promoviendo habilidades clave requeridas en el diseño de sistemas digitales modernos.

Adicionalmente, se integrará el uso de **GitHub Classroom** como herramienta de control de versiones y documentación técnica, alineando el proceso de desarrollo con prácticas empleadas en entornos profesionales e industriales.

---

## Docente de laboratorio

**Docente:**  
*David Orlando Briceño González*  
Ingeniero Electrónico  
Correo institucional: *dbriceno@unal.edu.co*  

**Grupos:**  
- Grupo G3 – *Jueves de 14:00 a 16:00*  
- Grupo G4 – *Viernes de 14:00 a 16:00*  

---

## Metodología de trabajo

El laboratorio se desarrollará bajo una metodología **práctica y progresiva**, orientada al aprendizaje activo y al trabajo colaborativo.

### 1️⃣ Preparación previa
Antes de cada sesión, los estudiantes deberán:
- Revisar la **guía del laboratorio** correspondiente.
- Estudiar los conceptos teóricos necesarios para la práctica.
- Verificar que su **entorno de trabajo** esté correctamente configurado (software y herramientas requeridas).

### 2️⃣ Desarrollo en laboratorio
Durante la sesión:
- El docente realizará una **introducción breve** a la práctica.
- Los estudiantes desarrollarán la actividad siguiendo la guía proporcionada.
- Se fomentará el análisis, la discusión técnica y la resolución de problemas.

### 3️⃣ Validación y análisis
Cada práctica deberá incluir:
- Simulaciones y pruebas funcionales.
- Verificación del diseño frente a los resultados esperados.
- Identificación de errores, limitaciones y posibles mejoras.

---

## Cronograma

El cronograma detallado de prácticas será publicado y actualizado en este repositorio.  
Cada laboratorio contará con su respectiva guía y fecha de entrega asociada.

| Semana | Nombre                          | Guía  | Entrega (GitHub Classroom) | Deadline   |
| ------ | ------------------------------- | ----- | -------------------------- | ---------- |
| 1-3    | Lab 00 - Algoritmia e instalación de herramientas básicas| [lab00](https://github.com/davidbriceo/2026-1_Lab_Electronica_Digital_2_G3yG4/tree/main/labs/lab00) | [Link](https://classroom.github.com/a/ZqcGp0Tz)       | 27/Feb/2026 |
| 4-5    | Lab01 - FPGA, Multiplicador y ASM     | [lab01](https://github.com/davidbriceo/2026-1_Lab_Electronica_Digital_2_G3yG4/tree/main/labs/lab01)| Link                       | 13/Mar/2026 |
| 6-7    | Lab02 - ALU                     | lab02 | Link                       | 27/Mar/2026 |
| 8-9    | Lab03 - ALU y banco registro    | lab03 | Link                       | 17/Abr/2026 |
| 11-14  | Lab04 - Procesador Block Design | lab04 | Link                       | 22/May/2026 |
| 15-16  | Proyecto final                  | -     | Link                       | TBD |


---

## Entregables y documentación

- Cada práctica se documentará mediante un **informe técnico**.
- El informe deberá realizarse en el archivo **`README.md`** del repositorio asignado por **GitHub Classroom**, usando formato **Markdown**.
- El repositorio podrá incluir:
  - Código HDL.
  - Diagramas y esquemas.
  - Resultados de simulación.
  - Archivos adicionales solicitados en la guía.

Es fundamental respetar la estructura y las indicaciones definidas en cada plantilla.

---

## Criterios de evaluación

La evaluación del Laboratorio de Electrónica Digital II se realizará con base en la asistencia, el desarrollo de las prácticas, el proyecto final y la calidad del proceso de diseño y documentación.

---

### Asistencia

La aprobación del laboratorio requiere un **mínimo del 90 % de asistencia**.

- El laboratorio cuenta con **16 sesiones** presenciales.
- A partir de la **segunda inasistencia**, la **nota máxima** que el estudiante podrá obtener en el laboratorio será **2.9**, independientemente de los resultados académicos obtenidos en las prácticas o el proyecto final.

---

### Estructura de evaluación del laboratorio

El laboratorio consta de **cinco (5) prácticas** y **un proyecto final**, con la siguiente distribución porcentual sobre la nota final del laboratorio:

- **Práctica 00:** 10 %
- **Práctica 01:** 15 %
- **Práctica 02:** 15 %
- **Práctica 03:** 15 %
- **Práctica 04:** 15 %
- **Proyecto final:** 30 %

---

### Rúbrica de evaluación de las prácticas (Lab00 a Lab04)

Cada práctica será evaluada con base en dos componentes principales:

#### 1️⃣ Demostración y presentación en laboratorio (40 %)

Corresponde a la **demostración del funcionamiento del diseño durante la sesión de laboratorio**, y tendrá en cuenta:

- Correcto funcionamiento del sistema solicitado.
- Capacidad de explicar el diseño propuesto.
- Coherencia entre el comportamiento esperado y los resultados obtenidos.
- Manejo adecuado de las herramientas de simulación e implementación.

#### 2️⃣ Informe técnico y documentación (60 %)

El informe deberá entregarse a través de **GitHub Classroom** y será evaluado considerando:

- **Descripción del sistema y del flujo de diseño digital**, incluyendo:
  - Planteamiento del diseño.
  - Descripción en HDL (Hardware Description Language).
- **Diagramas y representaciones gráficas**, tales como:
  - Diagrama o dibujo de la máquina de estados (cuando aplique).
  - Diagramas de bloques relevantes.
- **Resultados de simulación**, con análisis e interpretación.
- **Implementación del diseño**, cuando aplique.
- **Código fuente**, correctamente organizado y comentado.
- **Estructura y organización del repositorio**, claridad del README y uso adecuado de Markdown.

---

### Evaluación del proyecto final

El **proyecto final** integrará los conocimientos y habilidades desarrollados durante el semestre, y será evaluado considerando:

- Correcta aplicación del flujo de diseño de sistemas digitales.
- Funcionamiento del sistema propuesto.
- Nivel de complejidad y alcance del diseño.
- Calidad de la documentación técnica y del repositorio.
- Claridad en la presentación y defensa del proyecto.

---

### Consideraciones adicionales

Se valorará positivamente la inclusión de **mejoras, optimizaciones o análisis adicionales** más allá de lo solicitado en las guías, siempre que estén debidamente justificadas y documentadas.

---

## Normas generales del laboratorio

- La asistencia a las sesiones es obligatoria.
- Puntualidad y respeto por los tiempos asignados.
- Uso adecuado de los equipos e instalaciones.
- Mantener el orden y la limpieza del laboratorio.
- Reportar cualquier falla o irregularidad en los equipos.
- No está permitido el consumo de alimentos en el laboratorio.

---

## Herramientas de trabajo

### 💻 Sistema operativo
- Windows. Si el computador tiene medio - bajo rendimiento considere distribuciones Linux (Ubuntu, Linux Mint, u otras equivalentes).

### 🛠️ Editores y entornos
- Visual Studio Code

### ⚙️ Diseño y simulación
- Vivado / Vitis  
- Icarus Verilog  
- GTKWave  

### 🌐 Control de versiones
- Git  
- GitHub / GitHub Classroom  

---

## Canales de comunicación

- **Correo institucional:** *dbriceno@unal.edu.co*  
- Anuncios oficiales a través de GitHub Classroom.

---

## Recursos adicionales:
- [Curso Verilog y FPGA en Youtube](https://www.youtube.com/watch?v=GLfnmc4Vv5U&list=PLIyIZGa1sAZqeQJ6Y02b7O8HV0gK25zc2)
- [Instalación Linux + Windows dualboot en el mismo disco](https://www.youtube.com/watch?v=wIj7sHK0SkQ)
- [Instalación Linux + Windows en discos diferentes, tenga mucho cuidado](https://www.youtube.com/watch?v=KWVte9WGxGE)
- [Curso en Coursera de verilog y HDL, primero debe solicitar el acceso al convenio al correo coursera@unal.edu.co](https://www.coursera.org/programs/coursera-para-la-universidad-nacional-de-colombia-ji3sj/learn/fpga-hardware-description-languages?source=search#modules)
