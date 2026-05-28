# Guía de Evaluación Proyecto Final – Electrónica Digital II

## Contenido

* Objetivo de la evaluación final
* Componentes esperados del informe
* Estructura sugerida del repositorio
* Criterios de evaluación
* Rúbrica de calificación
* Penalizaciones recomendadas
* Recomendaciones finales

---

# 1. Objetivo de la evaluación final

El informe final tiene como propósito evaluar la capacidad del estudiante para **integrar los conocimientos desarrollados durante el curso** en un sistema digital completo, documentado y funcional.

A diferencia de las entregas anteriores, en esta evaluación no se busca únicamente verificar que el diseño funcione, sino que el grupo sea capaz de:

* Plantear claramente el problema y los objetivos del sistema.
* Diseñar una arquitectura digital coherente.
* Implementar el sistema en hardware y/o software.
* Integrar correctamente la FPGA, el SoC, periféricos o módulos externos.
* Explicar el funcionamiento técnico del sistema.
* Presentar evidencia de implementación física.
* Analizar los resultados obtenidos.
* Documentar adecuadamente el repositorio y los archivos entregados.

---

# 2. Componentes esperados del informe

El informe final debe estar organizado en un archivo `README.md` dentro del repositorio de GitHub Classroom. Este debe contener, como mínimo, las siguientes secciones:

---

## 2.1 Planteamiento del problema y objetivos

El grupo debe describir claramente qué sistema desarrolló y cuál es su propósito.

Debe incluir:

* Título
* Descripción general del problema o necesidad.
* Objetivo general del proyecto.
* Objetivos específicos.
* Entradas del sistema.
* Salidas del sistema.
* Alcance y limitaciones del diseño.

El planteamiento debe permitir entender qué se quería construir antes de revisar el código o las evidencias.

---

## 2.2 Video de funcionamiento

Al inicio del informe debe incluirse un video corto donde se observe el funcionamiento del sistema implementado.

El video debe mostrar:

* La tarjeta FPGA o SoC utilizada.
* Las entradas físicas usadas, si aplica.
* Las salidas físicas del sistema.
* La respuesta del sistema ante diferentes condiciones.
* Una explicación breve de lo que se observa.

El video puede estar enlazado desde el README o incluido como archivo dentro del repositorio.

---

## 2.3 Arquitectura del sistema

El grupo debe presentar la arquitectura general del diseño.

Dependiendo del proyecto, puede incluir:

* Diagrama de bloques.
* FSM.
* ASM.
* Diagrama de flujo.
* Arquitectura tipo datapath + control.
* Arquitectura PS–PL, si se usa Zynq.
* Relación entre módulos de hardware y software.
* Flujo de datos entre entradas, procesamiento y salidas.

La arquitectura debe explicar cómo se organiza internamente el sistema y cómo interactúan sus componentes.

---

## 2.4 Código fuente del sistema

El repositorio debe incluir todos los archivos necesarios para revisar y reproducir el diseño.

Según el tipo de proyecto, se deben adjuntar:

* Archivos `.v` o `.sv` de Verilog/SystemVerilog.
* Archivos `.vhd` si se utilizó VHDL.
* Archivos `.c` si se usó Vitis o programación embebida.
* Archivo `.xsa` si se utilizó Zynq/Vitis.
* Archivos `.xdc` si se usaron restricciones de pines.
* Módulos auxiliares.
* Top module.
* Wrappers generados.
* Archivos necesarios para implementación.

El código debe estar organizado en carpetas y debe ser coherente con lo explicado en el informe.

---

## 2.5 Detalles técnicos de implementación

El informe debe explicar cómo fue construido el sistema.

Debe incluir, según corresponda:

* Módulos implementados.
* Señales principales.
* Manejo de reloj.
* Manejo de reset.
* Registros internos.
* Estados de la FSM o ASM.
* Funcionamiento del datapath.
* Interfaces usadas.
* Protocolos utilizados.
* Periféricos empleados.
* Uso de botones, switches, LEDs, displays, sensores o módulos externos.
* Configuración de pines.
* Configuración de Vivado.
* Configuración de Vitis, si aplica.

No basta con decir que el sistema funciona; debe explicarse cómo fue implementado.

---

## 2.6 Integración y funcionamiento

Esta sección debe explicar cómo interactúan todos los bloques del sistema.

Si el proyecto usa una FPGA tradicional, se debe explicar:

* Cómo las entradas físicas llegan al diseño.
* Cómo se procesan las señales.
* Cómo se generan las salidas.
* Cómo se controla la temporización.
* Cómo se conectan los módulos internos.

Si el proyecto usa Zynq o SoC, se debe explicar:

* Qué parte del sistema está en el **Processing System (PS)**.
* Qué parte está en la **Programmable Logic (PL)**.
* Cómo se comunican PS y PL.
* Qué papel cumple el bus **AXI**.
* Qué periféricos fueron mapeados en memoria.
* Qué direcciones se usaron.
* Cómo se exportó el hardware mediante `.xsa`.
* Cómo el código en C controla el hardware.

El objetivo es que quede claro cómo una acción lógica o una instrucción de software termina produciendo una respuesta física en la tarjeta.

---

## 2.7 Análisis de resultados

El grupo debe analizar el comportamiento obtenido.

Debe incluir:

* Resultados esperados.
* Resultados obtenidos.
* Comparación entre lo esperado y lo observado.
* Evidencia del funcionamiento.
* Casos de prueba realizados manualmente.
* Errores encontrados.
* Limitaciones del sistema.
* Posibles causas de fallos, si los hubo.
* Mejoras posibles.

En esta entrega no es obligatorio presentar simulación en GTKWave. Sin embargo, sí debe existir una validación clara mediante evidencia física, video, pruebas manuales o capturas del flujo de implementación.

---

## 2.8 Conclusiones

Las conclusiones deben ser técnicas y propias del grupo.

Deben mencionar:

* Qué se logró implementar.
* Qué conceptos del curso se aplicaron.
* Qué dificultades se presentaron.
* Qué aprendieron del proceso.
* Qué mejorarían en una versión futura.
* Cómo se relaciona el proyecto con sistemas digitales reales.

No se aceptan conclusiones genéricas sin relación directa con el sistema desarrollado.

---

# 3. Estructura sugerida del repositorio

Se recomienda organizar el repositorio de la siguiente manera:

```text
README.md

src/
  top.v
  modulo_control.v
  modulo_datapath.v
  modulo_auxiliar.v
  main.c
  sistema.xsa

constraints/
  Zybo-Z7.xdc

docs/
  arquitectura.png
  diagrama_fsm.png
  diagrama_asm.png
  evidencias/

videos/
  funcionamiento.mp4
```

La estructura puede variar según el proyecto, pero debe ser clara y permitir revisar fácilmente el diseño.

---

# 4. Criterios de evaluación

La calificación final se realizará sobre **5.0**.

---

## 4.1 Planteamiento del problema y objetivos – 0.5 puntos

Se evalúa que el grupo explique claramente qué sistema desarrolló, para qué sirve y qué se espera de su funcionamiento.

| Nivel        | Descripción                                                                                                   |
| ------------ | ------------------------------------------------------------------------------------------------------------- |
| Excelente    | El problema, objetivo general, objetivos específicos, entradas, salidas y alcance están claramente definidos. |
| Bueno        | El sistema está descrito, pero algunos objetivos o alcances podrían ser más precisos.                         |
| Básico       | La descripción es superficial o no permite entender completamente el propósito del proyecto.                  |
| Insuficiente | No hay planteamiento claro del problema ni objetivos definidos.                                               |

---

## 4.2 Video de funcionamiento – 0.5 puntos

Se evalúa que exista evidencia visual clara del sistema funcionando.

| Nivel        | Descripción                                                                                        |
| ------------ | -------------------------------------------------------------------------------------------------- |
| Excelente    | El video muestra claramente la tarjeta, entradas, salidas, funcionamiento y respuesta del sistema. |
| Bueno        | El video evidencia funcionamiento, pero falta explicar mejor qué se está observando.               |
| Básico       | El video existe, pero es poco claro o no muestra suficientes casos.                                |
| Insuficiente | No hay video o no permite verificar el funcionamiento.                                             |

---

## 4.3 Arquitectura FSM, ASM, diagrama de flujo o diagrama de bloques – 0.7 puntos

Se evalúa la claridad de la arquitectura del sistema.

| Nivel        | Descripción                                                                                                     |
| ------------ | --------------------------------------------------------------------------------------------------------------- |
| Excelente    | Presenta una arquitectura clara y coherente, con diagrama de bloques, FSM, ASM o flujo de datos bien explicado. |
| Bueno        | Presenta arquitectura, pero faltan detalles en la relación entre módulos o señales.                             |
| Básico       | La arquitectura está incompleta o poco conectada con la implementación real.                                    |
| Insuficiente | No presenta arquitectura o el diagrama no corresponde al sistema implementado.                                  |

---

## 4.4 Código fuente y archivos entregados – 0.7 puntos

Se evalúa que el repositorio contenga los archivos necesarios para revisar el diseño.

Debe incluir, según corresponda:

* Archivos `.v`, `.sv` o `.vhd`.
* Archivos `.c`.
* Archivo `.xsa`.
* Archivos `.xdc`.
* Wrappers o top modules.
* Módulos auxiliares.

| Nivel        | Descripción                                                                              |
| ------------ | ---------------------------------------------------------------------------------------- |
| Excelente    | Todos los archivos están completos, organizados y son coherentes con el informe.         |
| Bueno        | Los archivos principales están, pero falta organización o algunos elementos secundarios. |
| Básico       | Hay archivos, pero faltan componentes importantes o no es fácil reproducir el diseño.    |
| Insuficiente | El código está incompleto o no se adjuntan los archivos necesarios.                      |

---

## 4.5 Detalles técnicos de implementación – 0.8 puntos

Se evalúa que el grupo explique técnicamente cómo se construyó el sistema.

Debe describir:

* Módulos principales.
* Señales internas.
* Manejo de reloj.
* Manejo de reset.
* Funcionamiento de la FSM, ASM o flujo algorítmico.
* Registros usados.
* Periféricos conectados.
* Interfaz con la tarjeta.

| Nivel        | Descripción                                                                                                 |
| ------------ | ----------------------------------------------------------------------------------------------------------- |
| Excelente    | La implementación está explicada con precisión técnica y se entiende cómo funciona internamente el sistema. |
| Bueno        | La explicación es correcta, pero faltan algunos detalles de señales, módulos o temporización.               |
| Básico       | La explicación es general y no permite seguir completamente la implementación.                              |
| Insuficiente | No se explican los detalles técnicos del diseño.                                                            |

---

## 4.6 Integración y funcionamiento del sistema – 0.8 puntos

Se evalúa cómo se integran los módulos y cómo el sistema funciona en conjunto.

En proyectos con FPGA tradicional se debe explicar:

* Conexión entre módulos.
* Entradas y salidas físicas.
* Uso de constraints.
* Temporización.
* Periféricos usados.

En proyectos con Zynq/SoC se debe explicar:

* Relación PS–PL.
* Uso del bus AXI.
* Address Editor.
* GPIO o periféricos mapeados en memoria.
* Archivo `.xsa`.
* Código C en Vitis.
* Ejecución sobre el ARM.

| Nivel        | Descripción                                                                                                |
| ------------ | ---------------------------------------------------------------------------------------------------------- |
| Excelente    | La integración está claramente explicada y se entiende cómo las entradas producen las salidas del sistema. |
| Bueno        | La integración es comprensible, pero faltan algunos detalles de conexión o flujo interno.                  |
| Básico       | Se menciona la integración, pero no se explica con suficiente profundidad.                                 |
| Insuficiente | No se entiende cómo se conectan los componentes del sistema.                                               |

---

## 4.7 Análisis de resultados – 0.5 puntos

Se evalúa que el grupo analice críticamente el funcionamiento obtenido.

Debe incluir:

* Resultados esperados.
* Resultados obtenidos.
* Casos de prueba.
* Evidencias.
* Comparación entre diseño y funcionamiento real.
* Limitaciones o errores.

| Nivel        | Descripción                                                                                     |
| ------------ | ----------------------------------------------------------------------------------------------- |
| Excelente    | Presenta análisis claro de resultados, casos probados, evidencia y comparación con lo esperado. |
| Bueno        | Presenta resultados, pero el análisis podría ser más profundo.                                  |
| Básico       | Solo describe que funcionó, sin analizar suficientemente.                                       |
| Insuficiente | No presenta análisis de resultados.                                                             |

---

## 4.8 Conclusiones – 0.3 puntos

Se evalúa que las conclusiones sean propias, técnicas y relacionadas con el proyecto.

| Nivel        | Descripción                                                                    |
| ------------ | ------------------------------------------------------------------------------ |
| Excelente    | Las conclusiones resumen logros, dificultades, aprendizajes y mejoras futuras. |
| Bueno        | Las conclusiones son adecuadas, pero algo generales.                           |
| Básico       | Las conclusiones son superficiales.                                            |
| Insuficiente | No hay conclusiones o no corresponden al proyecto.                             |

---

## 4.9 Organización del repositorio y presentación del informe – 0.2 puntos

Se evalúa la claridad general del informe y la organización del repositorio.

| Nivel        | Descripción                                                                      |
| ------------ | -------------------------------------------------------------------------------- |
| Excelente    | Repositorio ordenado, README claro, imágenes legibles y archivos bien nombrados. |
| Bueno        | El repositorio es entendible, aunque puede mejorar en organización.              |
| Básico       | El repositorio está desordenado o cuesta encontrar archivos importantes.         |
| Insuficiente | La entrega no permite revisar adecuadamente el proyecto.                         |

---

# 5. Rúbrica general

| Criterio                                           | Puntaje |
| -------------------------------------------------- | ------: |
| Planteamiento del problema y objetivos             |     0.5 |
| Video de funcionamiento                            |     0.5 |
| Arquitectura FSM, ASM, diagrama de flujo o bloques |     0.7 |
| Código fuente y archivos entregados                |     0.7 |
| Detalles técnicos de implementación                |     0.8 |
| Integración y funcionamiento del sistema           |     0.8 |
| Análisis de resultados                             |     0.5 |
| Conclusiones                                       |     0.3 |
| Organización del repositorio e informe             |     0.2 |
| **Total**                                          | **5.0** |

---

# 6. Escala de calificación

| Rango       | Descripción                                                                                                     |
| ----------- | --------------------------------------------------------------------------------------------------------------- |
| 4.6 – 5.0   | Proyecto completo, funcional, bien documentado, con arquitectura clara y excelente sustentación técnica.        |
| 4.0 – 4.5   | Proyecto funcional y bien presentado, con algunos detalles faltantes en análisis, arquitectura o documentación. |
| 3.5 – 3.9   | Proyecto aceptable, con funcionamiento evidente, pero con sustentación o documentación incompleta.              |
| 3.0 – 3.4   | Proyecto básico; se entiende la intención, pero faltan evidencias, organización o profundidad técnica.          |
| Menor a 3.0 | Proyecto incompleto, no reproducible o sin evidencia suficiente de funcionamiento.                              |

---

# 7. Recomendaciones finales

Para obtener una buena calificación, el grupo debe procurar que el informe responda claramente las siguientes preguntas:

1. ¿Qué sistema se construyó?
2. ¿Qué problema resuelve o qué comportamiento implementa?
3. ¿Cuál es la arquitectura del sistema?
4. ¿Qué módulos o bloques lo componen?
5. ¿Cómo se implementó técnicamente?
6. ¿Qué archivos permiten reproducir el diseño?
7. ¿Cómo se integró con la FPGA, SoC o periféricos?
8. ¿Cómo se evidencia que funciona?
9. ¿Qué resultados se obtuvieron?
10. ¿Qué aprendió el grupo del desarrollo?

---

# 8. Nota sobre simulación

En esta entrega final **no es obligatorio presentar simulación en GTKWave**. Sin embargo, esto no elimina la necesidad de validar el sistema.

La validación debe realizarse mediante:

* Video de funcionamiento.
* Evidencia física en la tarjeta.
* Capturas de Vivado o Vitis, si aplica.
* Casos de prueba manuales.
* Análisis de comportamiento esperado vs. comportamiento obtenido.

La ausencia de simulación no penaliza directamente, siempre que el funcionamiento del sistema esté bien demostrado y explicado.

---

# 9. Entregables finales

Cada grupo debe entregar en el repositorio:

1. `README.md` con el informe completo.
2. Video de funcionamiento cargado en el mismo repositorio.
3. Código fuente del diseño.
4. Archivos `.v`, `.c`, `.xsa`.
5. Diagrama de arquitectura, FSM, ASM o diagrama de flujo.
6. Evidencias de implementación.
7. Análisis de resultados.
8. Conclusiones.
9. Referencias utilizadas.

---

# 10. Referencias

Incluya las referencias utilizadas para el desarrollo del proyecto, tales como:

* Documentación de AMD/Xilinx.
* Manual de la tarjeta utilizada.
* Guías de Vivado o Vitis.
* Material del curso.
* Repositorios o recursos externos consultados.
