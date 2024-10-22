# UnrealEngine_BIM
**Descripción:** Creación de una clase en C++ que guarde datos en un archivo, y que presente la función en forma de blueprint.
## Antes de comenzar
**Se recomienda realizar una copia del proyecto, ya que en caso de que haya algún error al compilar no se perderá toda la información. Se debe de tener instalado Visual Studio (VS17 para UE 4.21-4.26).**

## Pasos para integrar la clase C++ en el proyecto:

1. Crear un nuevo proyecto de BP/Abrir el proyecto de BP.
![Image](https://github.com/user-attachments/assets/8199cd93-1fab-4433-9fac-828407b3a56c)
2. Crear una clase C++. Ir a ADD NEW o en EDIT --> New C++ class.

![Image](https://github.com/user-attachments/assets/69b9b192-e36d-44d7-95ea-b5dcfb4015f2)

3. Cambiar el nombre de la clase a `TextManager` y seleccionar que sea de tipo Public y crear clase.
![Image](https://github.com/user-attachments/assets/830eeda6-9dce-4bef-8090-cea77660e47f)

4. Para la compilación del proyecto se puede crear automáticamente o manualmente. Primero se crearán dos carpetas dentro del proyecto:
  - `Source`
  - `Proyecto`
  ![Image](https://github.com/user-attachments/assets/ffcb04cd-478f-41d5-a523-3628898c0d36)

a) Si la clase y el proyecto se compilan automáticamente, deben aparecer los siguientes mensajes y se abrirá automáticamente Visual Studio.
  ![Image](https://github.com/user-attachments/assets/ec1172e7-2efc-44d2-aa13-7bae3d37249b)

b) Si aparece un mensaje de error, el proyecto debe ser compilado manualmente para crear el archivo .sln. Para esto, se deben seguir los siguientes pasos:
   - Ir a la carpeta raíz del proyecto.
   - Dar clic derecho en el archivo del proyecto (`.uproject`).
   - Seleccionar la opción "Generate Visual Studio Project Files". Si es en Windows 11, dar clic en "More options".
![Image](https://github.com/user-attachments/assets/d0cbf25e-04b1-47e0-ba85-b9eca5771c86)

5. Se creará el archivo `.sln`, el cual se abrirá y se tendrá el proyecto en Visual Studio.
   - Copiar `TextManager.h` en la carpeta `Public`, y `TextManager.cpp` en la carpeta `Private`.

6.Modificar el header `TextManager.h`, cambiar el nombre del proyecto en mayúsculas en la línea 14.
7. Guardar ambos archivos (.cpp y .h) y compilar el proyecto. Abrir el archivo `.sln`, dar clic derecho en el proyecto y compilar. Unreal Engine debe estar cerrado.
![Image](https://github.com/user-attachments/assets/ba860cc0-6ad6-48f9-8598-6f46ed0f290d)
8. Si todo está correcto, al abrir el proyecto en Unreal Engine, en el content browser debe aparecer una nueva carpeta llamada `C++ classes` y dentro de UE podemos agregar el bloque de Save Array Text.
![Image](https://github.com/user-attachments/assets/3517e960-753f-471a-8036-1101a4e22b02)
![Image](https://github.com/user-attachments/assets/97f74c0e-2de6-43a7-8243-ebcf465db12a)


