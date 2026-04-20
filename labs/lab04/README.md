# Lab04 – SoC Zynq-7000

## Contenido

- Objetivos de aprendizaje  
- Fundamento teórico  
- Arquitectura del Zynq-7000  
- Procedimiento  
- Entregables  
- Referencias  

---

# 1. Objetivos de aprendizaje

Al finalizar esta práctica, el estudiante será capaz de:

- Implementar un **SoC** mediante la herramienta **Block Design** de Vivado.
- Identificar los bloques principales que componen el **Zynq-7000**.
- Comprender la integración entre procesador, memoria, periféricos y lógica programable.
- Reconocer la relación entre hardware programable y sistema embebido.
- Preparar una plataforma hardware para desarrollo posterior en **Vitis**.

---

# 2. Fundamento teórico

## 2.1 ¿Qué es un SoC?

Un **System on Chip (SoC)** es una arquitectura de hardware digital que integra en un único circuito los componentes esenciales de un sistema computacional. Generalmente incluye:

- Procesador central (**CPU**)
- Memoria ROM y RAM
- Periféricos de comunicación y control
- Temporizadores
- Interfaces de entrada y salida
- Buses internos de interconexión

El objetivo principal de un SoC es concentrar en un solo dispositivo las funciones necesarias para ejecutar aplicaciones completas, reduciendo tamaño, consumo y costo.

---

## 2.2 SoC implementado en FPGA

En esta práctica el sistema será implementado sobre una **FPGA Zybo Z7**, la cual incorpora el dispositivo **Zynq-7000**.

Esto permite trabajar con dos mundos en una sola plataforma:

- **Processing System (PS):** procesador ARM y periféricos integrados.
- **Programmable Logic (PL):** lógica reconfigurable tipo FPGA.

Gracias a esto, es posible diseñar sistemas donde una parte se ejecuta en software y otra en hardware.

---

# 3. Arquitectura del Zynq-7000

El **Zynq-7000** integra un procesador ARM Cortex-A9 junto con lógica programable Serie 7. Su arquitectura general se divide en dos grandes bloques:

## 3.1 Processing System (PS)

Corresponde al sistema de procesamiento embebido. Incluye:

- Procesador **ARM Cortex-A9**
- Memoria caché L1 y L2
- Controlador DDR
- Controladores SPI, I2C, UART, CAN, USB y Ethernet
- GPIO
- Temporizadores
- DMA
- JTAG y depuración

Este bloque permite ejecutar sistemas operativos o programas en lenguaje C.

---

## 3.2 Programmable Logic (PL)

Corresponde a la sección FPGA reconfigurable. Incluye:

- LUTs
- Flip-Flops
- Bloques DSP
- Memoria BRAM
- Ruteo programable
- Interfaces de alta velocidad

Aquí se implementan aceleradores hardware, periféricos personalizados o lógica digital diseñada por el usuario.

---

## 3.3 Comunicación entre PS y PL

Ambos bloques se comunican mediante buses **AXI**, lo que permite:

- Que el procesador controle hardware personalizado.
- Que módulos hardware accedan a memoria.
- Crear sistemas embebidos de alto desempeño.

---

## 3.4 Recursos utilizados en esta práctica

Durante este laboratorio se emplearán los siguientes componentes:

- **ZYNQ7 Processing System**
- Memoria interna BRAM
- Interfaz AXI
- GPIO para botones y LEDs
- Reset del sistema
- Aplicación software en Vitis

---

## Figura 1. Arquitectura general del Zynq-7000

![Zynq-7000](src/zynq-7000.avif)

---

# Observación técnica

En esta práctica se utilizará inicialmente el **Processing System** junto con periféricos básicos para comprender el flujo completo:

**Diseño hardware en Vivado → Exportación → Desarrollo software en Vitis**
