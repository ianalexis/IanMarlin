# Configuración de Marlin para Ender 3 Custom

Este proyecto contiene las modificaciones necesarias en la configuración del firmware Marlin para mi impresora 3D Ender 3 personalizada.
Su objetivo principal es mantener la trazabilidad de los cambios y sus mejoras.

## Archivos Modificados

### Configuration.h
Este archivo contiene la configuración básica de la impresora, como el tamaño del área de impresión, los tipos de sensores de temperatura, y otros parámetros esenciales.

### Configuration_adv.h
Este archivo incluye configuraciones avanzadas que permiten un control más detallado de la impresora, como la protección térmica, la configuración de los ventiladores, y otras opciones avanzadas.

## Modificaciones Principales

- **Input Shaping**: Activado para los ejes X e Y para reducir las vibraciones y mejorar la calidad de impresión.
- **Linear Advance**: Configurado para mejorar la precisión en la extrusión del filamento.
- **Thermal Protection**: Ajustes en la protección térmica.
- **PID Tuning**: Configuración de PID para un control preciso de la temperatura del hotend y la cama caliente.

## Archivos de Testing y Calibración

Este repositorio también contiene archivos de calibracion y testing, incluyendo una probeta de prueba de fuerza creada por RF47.

## Materiales

Se incluye un archivo con materiales probados y sus propiedades.
