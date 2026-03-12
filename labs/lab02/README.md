# Lab02: Diseño, simulación e implementación de una ALU de 4 bits

## Contenido

- Objetivos de aprendizaje  
- Fundamento teórico  
- Arquitectura del sistema  
- Procedimiento  
- Descripción del HDL base  
- Implementación en FPGA  
- Entregables  

---

# 1. Objetivos de aprendizaje

Al finalizar este laboratorio, el estudiante será capaz de:

- Comprender el papel de la **Unidad Aritmético-Lógica (ALU)** dentro de un procesador digital.
- Diseñar una **ALU de 4 bits** utilizando Verilog.
- Implementar operaciones aritméticas y lógicas controladas por un código de operación.
- Comprender el uso de **registros para almacenamiento temporal de datos**.
- Validar el funcionamiento del diseño mediante **simulación en Icarus Verilog y visualización en GTKWave**.
- Implementar el diseño en la **FPGA Zybo Z7** utilizando switches, botones y LEDs como interfaz de entrada/salida.

Este laboratorio constituye el **primer bloque funcional del procesador** que se desarrollará progresivamente durante el curso.

---

# 2. Fundamento teórico

## 2.1 Unidad Aritmético-Lógica (ALU)

La **ALU (Arithmetic Logic Unit)** es el bloque encargado de realizar operaciones matemáticas y lógicas dentro de un procesador.

Entre las operaciones más comunes se encuentran:

- suma  
- resta  
- AND lógico  
- OR lógico  
- XOR lógico  
- desplazamientos  

En una arquitectura de procesador, la ALU recibe datos desde registros del **datapath**, ejecuta la operación seleccionada por la **unidad de control** y produce un resultado que puede almacenarse nuevamente en los registros o enviarse a memoria.

---

## 2.2 Registros en sistemas digitales

Los **registros** son elementos de almacenamiento que permiten guardar datos entre ciclos de reloj.

Se implementan mediante **flip-flops** y se utilizan para almacenar:

- operandos  
- resultados intermedios  
- direcciones  
- instrucciones  

En este laboratorio se utilizarán dos registros:

- **Registro A**
- **Registro B**

Estos almacenarán los operandos que posteriormente serán procesados por la ALU.

---

## 2.3 Datapath simplificado

Debido a que la FPGA dispone de un número limitado de entradas físicas, los operandos no se introducirán simultáneamente. En su lugar se utilizará un **bus de datos compartido** y dos registros.

El sistema funciona de la siguiente manera:

1. Los **switches** representan un bus de datos de 4 bits.  
2. Un **botón permite cargar el valor del bus en el Registro A**.  
3. Otro **botón permite cargar el valor del bus en el Registro B**.  
4. Ambos registros alimentan las entradas de la **ALU**.  
5. El resultado se muestra en los **LEDs**.

Este esquema representa una arquitectura básica de **datapath**, que será la base para el procesador que se desarrollará en los laboratorios posteriores.

---

# 3. Procedimiento

## 3.1 Ejercicio 1: Diseño de la ALU

Diseñar una ALU de **4 bits** que ejecute las siguientes operaciones.

### Entradas

- Operando A de 4 bits  
- Operando B de 4 bits  
- Código de operación de 2 bits  

### Salida

- Resultado de 4 bits  

### Operaciones requeridas

| Código de operación | Operación |
|---------------------|----------|
| 00 | Suma |
| 01 | Resta |
| 10 | AND |
| 11 | OR |

La ALU debe implementarse como **lógica combinacional**.

---

## 3.2 Ejercicio 2: Simulación de la ALU

Antes de implementar el diseño en hardware, se debe verificar su funcionamiento mediante simulación.

### Testbench requerido

El testbench debe:

- probar múltiples combinaciones de entrada  
- verificar todas las operaciones  
- generar un archivo de ondas para visualización  

### Proceso de simulación

1. Compilar el diseño y el testbench con Icarus Verilog.  
2. Ejecutar la simulación para generar el archivo de ondas.  
3. Visualizar las señales en GTKWave.

---

### Señales a analizar en GTKWave

- Operando A  
- Operando B  
- Código de operación  
- Resultado  

Durante la simulación se debe verificar:

- correcta ejecución de cada operación  
- coherencia entre entradas y resultados  
- cambios correctos del resultado al variar el código de operación  

---

# 4. Descripción del HDL base

El diseño del laboratorio debe incluir:

- Un módulo que implemente la ALU de 4 bits.  
- Un módulo top que conecte la ALU con los dispositivos físicos de la FPGA.  
- Un testbench que permita verificar el funcionamiento del diseño mediante simulación.

La ALU debe recibir los operandos A y B, junto con el código de operación, y producir el resultado correspondiente.

El módulo superior del sistema debe incluir registros para almacenar los operandos cargados desde los switches.

---

# 5. Implementación en FPGA

## Asignación de hardware

### Switches

Los switches representan el **bus de datos de 4 bits**.

| Switch | Función |
|------|------|
| SW0 | bit 0 |
| SW1 | bit 1 |
| SW2 | bit 2 |
| SW3 | bit 3 |

---

### Botones

Los botones controlan la carga de los registros y la operación de la ALU.

| Botón | Función |
|------|------|
| BTN0 | cargar registro A |
| BTN1 | cargar registro B |
| BTN2 | bit 0 del código de operación |
| BTN3 | bit 1 del código de operación |

---

### LEDs

Los LEDs muestran el resultado de la operación.

| LED | Función |
|------|------|
| LED0 | bit 0 del resultado |
| LED1 | bit 1 del resultado |
| LED2 | bit 2 del resultado |
| LED3 | bit 3 del resultado |

---

### LED RGB

El LED RGB puede utilizarse como indicador visual del tipo de operación ejecutada.

| Operación | Color sugerido |
|-----------|----------------|
| Suma | Verde |
| Resta | Rojo |
| Operaciones lógicas | Azul |

---

# 6. Verificación en hardware

Procedimiento de prueba:

1. Colocar un valor en los switches.  
2. Presionar **BTN0** para cargar el valor en el Registro A.  
3. Cambiar el valor en los switches.  
4. Presionar **BTN1** para cargar el valor en el Registro B.  
5. Seleccionar la operación mediante **BTN3 y BTN2**.  
6. Observar el resultado en los LEDs.

---

# 7. Entregables

Cada grupo deberá entregar en el repositorio asignado:

## README.md

Debe incluir:

- explicación del funcionamiento de la ALU  
- tabla de operaciones implementadas  
- capturas de GTKWave  
- explicación del comportamiento observado en la simulación  

---

## Carpeta src/

Debe incluir:

- archivo del módulo ALU  
- archivo del módulo superior del sistema  

---

## Carpeta sim/

Debe incluir:

- testbench utilizado para la simulación  
- archivo de ondas generado  
- capturas de GTKWave  

---

## Demostración en laboratorio

Cada grupo deberá demostrar:

- simulación funcional en GTKWave  
- implementación funcional en FPGA  
- ejecución correcta de todas las operaciones  

---

# 8. Criterios de éxito

El laboratorio se considera correcto si se cumplen todas las siguientes condiciones:

- la ALU ejecuta correctamente todas las operaciones definidas  
- la simulación coincide con el comportamiento esperado  
- el diseño sintetiza correctamente en Vivado  
- el sistema responde correctamente a las entradas físicas de la FPGA  
