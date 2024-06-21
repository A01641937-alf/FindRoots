# FindRoots

Este programa consiste en crear una aplicación que calcule las raíces (reales) de un polinomio de la forma: ax² + bx + c.

## Características

- Calcula las raíces reales de un polinomio cuadrático.
- Implementado en C++. (No se requiere una versión particular).
- Utiliza CMake para la construcción del proyecto.

## Requisitos

- CMake 3.26.4
- Visual Studio 2022 versión 17.7.5
- Windows 11

## Cómo funciona

El programa `findroots.exe` toma tres argumentos que corresponden a los coeficientes del polinomio cuadrático (a, b, y c). Utiliza la fórmula cuadrática para calcular las raíces reales del polinomio. A continuación, se describe el proceso detallado:

1. **Cálculo del Discriminante:**
    - Se calcula el discriminante usando la fórmula:
    $\[
    D = b^2 - 4ac
    \]$
    - El discriminante determina la naturaleza de las raíces del polinomio.
    - Si $\(D < 0\)$, el polinomio no tiene raíces reales.
    - Si $\(D = 0\)$, el polinomio tiene una raíz real doble.
    - Si $\(D > 0\)$, el polinomio tiene dos raíces reales distintas.

2. **Cálculo de las Raíces:**
    - **Discriminante Mayor que Cero $(\(D > 0\))$:**
        - Si el discriminante es positivo, hay dos raíces reales distintas:
        $\[
        x_1 = \frac{{-b + \sqrt{D}}}{2a}
        \]$
        $\[
        x_2 = \frac{{-b - \sqrt{D}}}{2a}
        \]$
        - El programa imprime estas dos raíces.
    - **Discriminante Igual a Cero $(\(D = 0\))$:**
        - Si el discriminante es cero, hay una raíz real doble:
        $\[
        x = \frac{{-b}}{2a}
        \]$
        - El programa imprime esta raíz única.
    - **Discriminante Menor que Cero $(\(D < 0\))$:**
        - Si el discriminante es negativo, no hay raíces reales. El programa imprime un mensaje indicando que no hay soluciones reales.

3. **Manejo de Casos Especiales:**
    - **Coeficiente $\(a = 0\)$:**
        - $Si \(a = 0\)$, el polinomio no es cuadrático. En este caso, se soluciona la ecuación lineal $\(bx + c = 0\)$, siempre que $\(b \neq 0\)$, como:
        $\[
        x = \frac{{-c}}{b}
        \]$
        - $Si \(b = 0\)$, el programa imprime un mensaje indicando que la ecuación no tiene solución $(si \(c \neq 0\)$) o que cualquier valor de $\(x\)$ es solución $(si \(c = 0\)$).

El programa imprime las raíces calculadas en la consola, proporcionando un método simple y efectivo para resolver polinomios cuadráticos.

## Instalación

1. Clona el repositorio:
    ```bash
    git clone https://github.com/A01641937-alf/FindRoots.git
    cd FindRoots
    ```

2. Elimina el contenido del directorio `build` (si es necesario):
    ```powershell
    Remove-Item -Recurse -Force build
    ```

3. Crea y navega al directorio `build`:
    ```powershell
    mkdir build
    cd build
    ```

4. Genera los archivos de proyecto usando CMake:
    ```powershell
    cmake -G "Visual Studio 17 2022" ..
    ```

5. Compila el proyecto usando MSBuild:
    ```powershell
    cmake --build . --config Release
    ```

## Uso

1. Ejecuta el programa:
    ```powershell
    .\findroots.exe 2 3 -5
    ```

    Esto calculará las raíces del polinomio $\(2x^2 + 3x + -5\)$.

