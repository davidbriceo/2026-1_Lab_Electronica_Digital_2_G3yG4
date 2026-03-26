# Lab03 – ALU + Banco de Registros + Diseño Modular

## Contenido

- Objetivos de aprendizaje  
- Fundamento teórico  
- Descripción del sistema  
- Arquitectura del diseño  
- Interfaz de usuario (Zybo Z7)  
- Procedimiento  
- Entregables  

---

# 1. Objetivos de aprendizaje

Al finalizar esta práctica, el estudiante será capaz de:

- Comprender el funcionamiento de la **ALU** y el **banco de registros** dentro de un sistema digital.
- Aplicar principios de **diseño modular** en la construcción de sistemas complejos.
- Implementar una **ALU de 4 bits** con operaciones aritméticas y lógicas.
- Diseñar un **banco de registros de 4 posiciones** para almacenamiento de datos.
- Integrar múltiples módulos en un archivo superior `top.v`.
- Verificar el sistema mediante **simulación en GTKWave**.
- Validar el funcionamiento del sistema en la **FPGA Zybo Z7**.

---

# 2. Fundamento teórico

## 2.1 Diseño modular

El diseño modular consiste en dividir un sistema digital en bloques independientes, cada uno con una función específica. Esta metodología permite:

- Reducir la complejidad del sistema
- Facilitar la depuración
- Reutilizar componentes
- Escalar el diseño

En esta práctica, el sistema se dividirá en:

- ALU
- Banco de registros
- Módulo de visualización
- Módulo `top.v` (integración)

---

## 2.2 Unidad Aritmético-Lógica (ALU)

La ALU es el bloque encargado de ejecutar operaciones sobre los datos. En esta práctica se implementará una ALU de 4 bits capaz de realizar operaciones aritméticas y lógicas.

---

## 2.3 Banco de registros

El banco de registros permite almacenar datos temporales que serán utilizados como operandos o resultados. Se implementará un banco de **4 registros de 4 bits**.

---

## 2.4 Integración de sistemas digitales

Un sistema digital completo se construye conectando módulos independientes mediante señales bien definidas. El archivo `top.v` será responsable de esta integración.

---

# 3. Descripción del sistema a implementar

Se implementará un sistema digital compuesto por:

- Un banco de registros de 4 posiciones (R0–R3)
- Una ALU de 4 bits
- Un sistema de selección automática de operandos
- Un módulo de visualización mediante display de 7 segmentos (TM1637)

El sistema permitirá:

1. Almacenar valores en los registros
2. Recorrer combinaciones de registros para generar operandos
3. Ejecutar operaciones entre registros
4. Visualizar el resultado de la operación

---

# 4. Arquitectura del diseño

El sistema deberá estar dividido en los siguientes módulos:

## 4.1 `alu.v`
- Entradas: operando A, operando B, operación
- Salida: resultado

---

## 4.2 `reg_bank.v`
- 4 registros de 4 bits
- Escritura controlada por señal `write_enable`
- Lectura de registros según direcciones

---

## 4.3 `comb_selector.v`
- Genera combinaciones de registros (A, B)
- Avanza mediante un índice interno

---

## 4.4 `display_tm1637.v`
- Muestra el resultado de la ALU
- Interfaz con el módulo TM1637

---

## 4.5 `top.v`
- Integra todos los módulos
- Maneja entradas/salidas físicas
- No debe contener lógica compleja

---

# 5. Interfaz de usuario (Zybo Z7)

## Switches (SW[3:0])

- `SW[3:0]`: dato de entrada (4 bits)
- `SW[2:0]`: selección de operación ALU

---

## Botones

- **BTN0**: seleccionar registro para escritura (R0 → R3)
- **BTN1**: escribir dato en registro seleccionado
- **BTN2**: cambiar combinación de operandos (A, B)
- **BTN3**: ejecutar operación ALU

---

## LEDs

Cada LED representa un registro:

- LED0 → R0  
- LED1 → R1  
- LED2 → R2  
- LED3 → R3  

Se encenderán los LEDs correspondientes a los registros activos en la operación.

Ejemplo:
- R0 y R1 → LED0 y LED1 encendidos

---

## LED RGB

Indica el registro seleccionado para escritura.

---

## Display TM1637

Muestra el resultado de la ALU.

---

# 6. Procedimiento

## Parte 1 – Diseño modular

Implemente cada uno de los siguientes módulos de manera independiente:

- ALU
- Banco de registros
- Selector de combinaciones
- Driver del display

Cada módulo debe ser probado individualmente.

---

## Parte 2 – Simulación (obligatoria antes de FPGA)

Desarrolle un **testbench del sistema completo** que permita verificar:

- Escritura correcta en el banco de registros
- Generación correcta de combinaciones de operandos
- Funcionamiento de la ALU
- Resultado esperado en cada operación

Visualice los resultados en **GTKWave**.

⚠️ **No se permitirá avanzar a FPGA sin simulación validada**

---

## Parte 3 – Integración en `top.v`

Integre todos los módulos en `top.v`.

- Conecte señales correctamente
- Mantenga el diseño modular
- Evite lógica compleja en este módulo

---

## Parte 4 – Implementación en FPGA

Una vez validada la simulación:

- Cree el proyecto en Vivado
- Asigne pines a switches, botones, LEDs y display
- Programe la FPGA
- Verifique el funcionamiento físico

---

# 7. Entregables

Cada grupo deberá entregar:

- Código fuente de todos los módulos (`src/`)
- Archivo `top.v`
- Testbench completo
- Archivo `.vcd` de simulación
- README.md con:
  - Descripción del sistema
  - Explicación de la arquitectura modular
  - Capturas de GTKWave
  - Evidencia de funcionamiento en FPGA
  - Análisis de resultados

---

# 8. Reglas importantes

- ❗ El diseño debe ser modular
- ❗ No se permite implementar toda la lógica en `top.v`
- ❗ La simulación es obligatoria antes de la implementación
- ❗ El informe debe reflejar el proceso completo: diseño → simulación → implementación

---

# 9. Observación final

Este laboratorio no se enfoca únicamente en la ALU, sino en la construcción de un **sistema digital completo basado en módulos**, siguiendo el flujo real de diseño:

**Especificación → Diseño → Simulación → Implementación**
