
# Simulador de Procesos de Sistemas Operativos

Este proyecto es un simulador de procesos de sistemas operativos que implementa funcionalidades clave como la planificación de procesos, gestión de memoria y gestión de recursos. Utiliza algoritmos de planificación como Round Robin y mecanismos para asignar y utilizar recursos y memoria.

## Estructura del Proyecto

El proyecto está dividido en varios módulos lógicos que abarcan diferentes aspectos de la simulación:

- **Planificación de Procesos**
  - `planificacion_procesos/planificador.cpp`
  - `planificacion_procesos/planificador.h`
  - `planificacion_procesos/algoritmos_planificacion.cpp`
  - `planificacion_procesos/algoritmos_planificacion.h`
- **Gestión de Memoria**
  - `gestion_memoria/gestor_memoria.cpp`
  - `gestion_memoria/gestor_memoria.h`
  - `gestion_memoria/algoritmos_asignacion.cpp`
  - `gestion_memoria/algoritmos_asignacion.h`
- **Gestión de Recursos**
  - `gestion_recursos/gestor_recursos.cpp`
  - `gestion_recursos/gestor_recursos.h`
  - `gestion_recursos/semaforos.cpp`
  - `gestion_recursos/semaforos.h`
- **Estructuras de Datos**
  - `estructuras_datos/proceso.cpp`
  - `estructuras_datos/proceso.h`
  - `estructuras_datos/memoria.cpp`
  - `estructuras_datos/memoria.h`
- **Utilidades**
  - `utils/utilidades.cpp`
  - `utils/utilidades.h`

## Requisitos

- [MinGW](https://sourceforge.net/projects/mingw/) (Windows)
- [g++](https://gcc.gnu.org/) (parte de MinGW)
- [Visual Studio Code](https://code.visualstudio.com/)

## Instalación

### Paso 1: Instalar MinGW

1. Descarga e instala MinGW desde [aquí](https://sourceforge.net/projects/mingw/).
2. Durante la instalación, selecciona los paquetes necesarios para `g++` y C++ 14.
3. Agrega la ruta de `bin` de MinGW (e.g., `C:\MinGW\bin`) a la variable de entorno `PATH`.

### Paso 2: Configurar Visual Studio Code

1. Instala la extensión de C/C++ para Visual Studio Code.
2. Configura el `c_cpp_properties.json`:
    ```json
    {
        "configurations": [
            {
                "name": "Win32",
                "includePath": [
                    "${workspaceFolder}/**",
                    "C:/MinGW/include",
                    "C:/MinGW/lib/gcc/mingw32/6.3.0/include"
                ],
                "defines": [
                    "_DEBUG",
                    "UNICODE",
                    "_UNICODE"
                ],
                "windowsSdkVersion": "10.0.19041.0",
                "compilerPath": "C:/MinGW/bin/g++.exe",
                "cStandard": "c11",
                "cppStandard": "c++14",
                "intelliSenseMode": "windows-gcc-x64"
            }
        ],
        "version": 4
    }
    ```

### Paso 3: Compilar y Ejecutar

1. Abre Visual Studio Code y navega a la carpeta del proyecto.
2. Configura el `tasks.json` para compilar todos los archivos:
    ```json
    {
        "version": "2.0.0",
        "tasks": [
            {
                "label": "build",
                "type": "shell",
                "command": "g++",
                "args": [
                    "main.cpp",
                    "planificacion_procesos/planificador.cpp",
                    "estructuras_datos/proceso.cpp",
                    "gestion_memoria/gestor_memoria.cpp",
                    "gestion_recursos/gestor_recursos.cpp",
                    "-o",
                    "simulador"
                ],
                "group": {
                    "kind": "build",
                    "isDefault": true
                },
                "problemMatcher": ["$gcc"],
                "detail": "Generated task by Debugger."
            }
        ]
    }
    ```
3. Compila y ejecuta el proyecto utilizando el comando de compilación de VS Code (`Ctrl+Shift+B`).

## Uso

Una vez compilado el proyecto, puedes ejecutar el simulador con el siguiente comando:

```sh
./simulador
```

### Funcionalidades

- **Planificación Round Robin**: Implementada en `Planificador::planificarRoundRobin`.
- **Asignación de Memoria**: Implementada en `GestorMemoria::asignarMemoria`.
- **Gestión de Recursos**: Implementada en `GestorRecursos::utilizarRecurso`.

### Ejemplos de Código

#### `main.cpp`

```cpp
#include <iostream>
#include <queue>
#include "estructuras_datos/proceso.h"
#include "planificacion_procesos/planificador.h"
#include "gestion_memoria/gestor_memoria.h"
#include "gestion_recursos/gestor_recursos.h"

int main() {
    std::queue<Proceso> procesos;
    procesos.push(Proceso(1, 0, 5));
    procesos.push(Proceso(2, 1, 3));
    procesos.push(Proceso(3, 2, 7));

    Planificador planificador;
    planificador.planificarRoundRobin(procesos, 2);

    GestorMemoria gestorMemoria;
    gestorMemoria.asignarMemoria(256);

    GestorRecursos gestorRecursos;
    gestorRecursos.utilizarRecurso("CPU");

    return 0;
}
```

## Contribuciones

Las contribuciones son bienvenidas. Por favor, sigue los siguientes pasos para contribuir:

1. Haz un fork del proyecto.
2. Crea una rama para tu nueva funcionalidad (`git checkout -b nueva-funcionalidad`).
3. Realiza tus cambios y haz commits (`git commit -m 'Añadir nueva funcionalidad'`).
4. Sube tus cambios (`git push origin nueva-funcionalidad`).
5. Abre un Pull Request.

## Licencia

Este proyecto está licenciado bajo la Licencia MIT. Consulta el archivo [LICENSE](LICENSE) para más detalles.

## Contacto

Para cualquier consulta o problema, puedes contactarme a través de [shalomsolutiontech@gmail.com](mailto:shalomsolutiontech@gmail.com).
