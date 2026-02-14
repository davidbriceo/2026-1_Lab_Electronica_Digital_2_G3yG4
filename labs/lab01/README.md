# Lab01: FPGA (Zybo Z7), Vivado/Vitis y Validación de Hardware

## Contenido
- Objetivos de aprendizaje  
- Fundamento teórico  
- Procedimiento  
- Descripción del HDL base  
- Entregables  

---

## 1. Objetivos de aprendizaje

- Instalar y verificar el correcto funcionamiento de **Vivado** y **Vitis**.
- Crear un proyecto para la tarjeta **Zybo Z7** y programar la FPGA mediante **JTAG**.
- Comprender el rol de los **constraints (.xdc)** para mapear señales HDL a pines físicos.
- Validar el funcionamiento de la tarjeta mediante un **Smoke Test**.
- Diseñar e implementar un **Test Funcional Personalizado** (lógica combinacional) usando:
  - **4 switches**
  - **6 botones**
  - **5 LEDs RGB**
- Integrar operaciones de **AND, OR, XOR** y una operación aritmética (**suma o resta de 4 bits**) en un diseño real sobre FPGA.

---

## 2. Fundamento teórico

### 2.1 FPGA vs simulación: del HDL a hardware real

En simulación (Lab00) se valida el comportamiento lógico en un entorno controlado.  
En una FPGA, ese mismo HDL se sintetiza y se implementa en hardware físico, por lo que entran en juego:

- El **reloj real** de la tarjeta.
- Entradas físicas (switches y botones) con rebote y tiempos no ideales.
- Salidas físicas (LEDs) que permiten observar resultados de forma directa.
- El mapeo físico de pines mediante **constraints**.

---

### 2.2 Constraints (.xdc) y mapeo de pines

El archivo `.xdc` define cómo se conectan las señales del módulo `top` con los pines reales de la tarjeta (IOs).  
Un diseño correcto en Verilog puede no funcionar en hardware si:

- Los pines están mal asignados.
- Se usó un estándar eléctrico incorrecto.
- Se conectó una señal a un pin inexistente o diferente.

**Idea clave:**  
El HDL define el hardware lógico, el `.xdc` define cómo ese hardware se conecta al mundo real.

---

### 2.3 Validación incremental: Smoke Test y Test Funcional

Antes de construir sistemas grandes (ALU, datapath, procesador), se valida el flujo completo:

1. Herramientas instaladas y funcionando.
2. Proyecto compila y genera bitstream.
3. La FPGA se programa sin errores.
4. Entradas/salidas funcionan como se espera.

Este laboratorio se enfoca en esa validación, y en la construcción de un test propio que obligue a usar
**lógica combinacional real** (compuertas + aritmética), para que cada que reciba en préstamo la tarjeta 
usted pueda verificar rápidamente su funcionamiento y como preparación inmediata para la ALU.

---

## 3. Procedimiento

### 3.0 Instalación de Vivado y Vitis

Este laboratorio utilizará:

- **Vivado**: diseño RTL, síntesis, implementación y generación de bitstream.
- **Vitis**: herramienta de desarrollo para flujo con procesadores (se instalará en este lab para dejar el entorno listo).

> Nota: Aunque Vitis se instala y verifica, el desarrollo de software sobre el PS (Zynq) se abordará más adelante.

#### 3.0.1 Instalación (Windows)
1. Cree una cuenta en la página de Xilinx en el siguiente (enlace)[https://www.amd.com/en/registration/create-account.html]
2. Descargue el instalador de Vivado y Vitis en el siguiente (enlace)[https://www.xilinx.com/support/download/index.html/content/xilinx/en/downloadNav/vivado-design-tools.html]
3. Seleccione la versión  AMD Unified Installer for FPGAs & Adaptive SoCs 2025.2: Windows Self Extracting Web Installer (EXE - 233.33 MB)
![Seleccione el instalador para Windows](src/imgs/desc_vivado.png)
4. Una vez descargue, ejecute el instalador y seleccione **Vitis**
![Seleccione la primera opción - Vitis](src/imgs/ins_vivado_0.png)
5. Elija la opción **Vivado ML Standard**
6. Elija específicamente las opciones marcadas en la siguiente imagen, asegúrese de no instalar más ya que la instalación le ocupará mucho más espacio:
![Seleccione las siguientes opciones](src/imgs/ins_vivado_2.png)
7. Acepte todas las condiciones:
![Acepte condiciones y siguiente](src/imgs/ins_vivado_3.png)
8. Seleccione el directorio donde quiere que se instale Vivado seleccionando las opciones de la imagen:
![Seleccione su directorio y elija estas opciones](src/imgs/ins_vivado_4.png)
9. Presione instalar, no desconecte su computador de la red ni de la alimentación:
![Instale](src/imgs/ins_vivado_5.png)

Si trabaja sobre Linux (acuda a este repositorio)[https://github.com/jharamirezma/Lab_electronica_digital_2/blob/main/labs/lab00/Vivado_vitis_installation_guide.md] propiedad y autoría del Docente Jhon Ramírez.

---

### 3.1 Configuración del proyecto para Zybo Z7

1. Una vez instalado, debe abrir Vivado.
2. Cree un nuevo proyecto en Vivado. Defina un nombre y su ubicación:
![Defina nombre y ubicación](src/imgs/deploy_0.png)
3. En la ventana Project Type elija **RTL Project** y seleccione **Next**:
![Seleccione RTL Project](src/imgs/deploy_1.png)
4. En la ventana Add Sources debemos añadir los módulos de verilog, system verilog que tengamos creados para cada práctica/proyecto, por ejemplo:
![Añada módulos](src/imgs/deploy_2.png)
5. En la ventana **Add Constraints** debemos incluir el archivo *.xdc* de configuración de pines. Desgargue el archivo [aquí](https://github.com/Digilent/Zybo-Z7-10-XADC/blob/master/src/constraints/Zybo-Z7.xdc)
![Añada las constraints](src/imgs/deploy_3.png)
6. En la ventana Default Part debemos elejir la referencia de la FPGA que se encuentra en la tarjeta de desarrollo ZyboZ7, que para el caso de las tarjetas que tenemos en el LABDIEE, la referencia es xc7z010clg400.
![Añada la tarjeta](src/imgs/deploy_4.png)
7. En la ventana *New Project Summary* encontrará un resumen de la creación del proyecto, presione **Finish** y eso es todo.

---

### 3.2 Verificación del entorno en FPGA (Smoke Test)

#### Descripción

El docente proveerá un **bitstream de Smoke Test** para validar que la tarjeta está operativa y que el mapeo
de entradas/salidas es el correcto. Montaremos el semáforo que diseñamos en la práctica anterior

#### Actividad 1

1. Programe la Zybo Z7 con el bitstream provisto.
2. Verifique físicamente el comportamiento esperado:
   - Respuesta de switches
   - Respuesta de botones
   - Funcionamiento de LEDs RGB
   - Indicación de reloj (parpadeo o patrón temporal)

> Si el Smoke Test no funciona correctamente, el estudiante debe resolver el problema de instalación, drivers,
cableado, o selección de tarjeta antes de continuar al Ejercicio 2.

---

### 3.3 Ejercicio 2: Test Funcional Personalizado (Diseño libre con criterios obligatorios)

En este ejercicio cada estudiante diseñará su propio sistema **combinacional** para validar rápidamente
que la FPGA, los pines y el `.xdc` funcionan correctamente.

#### Recursos disponibles (obligatorios)

- **Entradas:**
  - `SW[3:0]` (4 switches)
  - `BTN[5:0]` (6 botones)
- **Salidas:**
  - `LED_RGB[4:0]` (5 LEDs RGB)

> Importante: En este laboratorio los LEDs RGB se consideran “salidas visuales”.
> Cada estudiante decidirá cómo utilizar canales/colores según el wrapper provisto en el proyecto.

---

#### Requisitos de diseño (obligatorios)

El diseño debe cumplir **TODOS** los siguientes requisitos:

1. **Usar las 10 entradas** disponibles:
   - Los 4 switches deben afectar el comportamiento de forma verificable.
   - Los 6 botones deben afectar el comportamiento de forma verificable.
2. Utilizar como salida los **5 LEDs RGB** (los cinco deben participar de alguna forma en el test).
3. Incluir explícitamente en el HDL (al menos una vez cada uno):
   - Una operación **AND**
   - Una operación **OR**
   - Una operación **XOR**
4. Incluir una operación aritmética de **4 bits**:
   - **Suma** o **resta** (por ejemplo: `A + B` o `A - B`)
5. El diseño **NO** puede ser trivial:
   - No se permite “un botón enciende un LED” sin lógica adicional.
   - No se permite cableado directo sin procesamiento (por ejemplo `assign led = sw;` como diseño principal).

**Debe existir procesamiento lógico real** y ser observable en los LEDs.

---

#### Recomendación técnica (para que sea verificable en 2 minutos)

Para que su test sea útil como verificación rápida, se recomienda que el diseño tenga:

- Al menos **dos operandos de 4 bits** construidos con combinaciones de switches y botones.
- Un conjunto de salidas que muestren:
  - Resultados lógicos (AND/OR/XOR)
  - Resultado aritmético (suma/resta)
  - Una bandera útil (ej. `zero`, `carry/borrow`, `paridad`)

---

#### Ejemplos de ideas válidas (orientativos)

**Ejemplo A: Mini “analizador lógico-aritmético”**
- Construir dos operandos:
  - `A = SW[3:0]`
  - `B = {BTN3, BTN2, BTN1, BTN0}`
- Calcular simultáneamente:
  - `A & B`
  - `A | B`
  - `A ^ B`
  - `A + B` (o `A - B`)
- Usar BTN4/BTN5 para seleccionar qué resultado se visualiza en cada LED RGB.

**Ejemplo B: Sistema con firmas y banderas**
- `A = SW[3:0]`
- `B` se deriva de botones y una condición (por ejemplo invertir bits si BTN5=1)
- Salidas incluyen:
  - Paridad de `A` con XOR acumulado
  - Bandera `Z` si suma es cero
  - Bandera de `carry` en suma

> Estos ejemplos no son obligatorios, solo guías. El diseño final es libre, siempre que cumpla requisitos.

---

#### Evidencia requerida (en el README)

El estudiante debe incluir:

1. **Descripción breve del diseño** (qué calcula y qué muestra cada LED RGB).
2. Capturas o video corto demostrando:
   - Que switches y botones afectan el resultado.
   - Que se observan AND/OR/XOR y suma/resta en la práctica.
3. Diagrama simple (puede ser a mano) mostrando:
   - Entradas → bloques lógicos/ariméticos → salidas.

---

## 4. Descripción del HDL base

El repositorio del laboratorio debe incluir:

- Un módulo `top` (o wrapper) con las señales de entrada/salida definidas.
- Un archivo `.xdc` con el mapeo de pines provisto.
- Para el Ejercicio 1:
  - Un módulo combinacional principal (por ejemplo `test_funcional.v`)
  - Asignaciones claras para AND/OR/XOR y suma/resta.
  - Comentarios que indiquen qué se está mostrando en cada LED RGB.

> Nota: Aunque este ejercicio puede resolverse 100% combinacional, se recomienda mantener el diseño claro y modular
para facilitar el salto a ALU en el siguiente laboratorio.

---

## 5. Entregables

- Documentación del laboratorio en `README.md`, incluyendo:
  - Evidencia del Smoke Test (programación exitosa)
  - Evidencia y explicación del Ejercicio 1
- Carpeta `src/` con:
  - Código HDL del test funcional personalizado
  - (Opcional) módulos auxiliares reutilizables
- Demostración funcional durante la sesión de laboratorio

Todos los archivos deben ser cargados en el repositorio asignado en **GitHub Classroom**.
