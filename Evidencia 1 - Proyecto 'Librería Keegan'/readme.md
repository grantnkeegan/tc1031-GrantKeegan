# Proyecto: La Librería Keegan
En este proyecto, quiero crear una base de datos digital para una librería. El objetivo es, a través de clases y objetos, formar un repositorio de distintas películas, series, libros, comics, y videojuegos (que podría expandirse a más categorías). Cada uno de esos objetos tendrá ciertos atributos con los que puedo trabajar.

Por ejemplo, la base “Item” del que todas las demás clases heredan tiene los atributos “type” para el tipo de objeto (peli, juego, serie), nombre (name), el año en el que salió (year), el género (genre), cuando dura en terminar (length), la franquicia a la que pertenece (franchise), y una calificación subjetiva de calidad (score). Las clases heredadas específicas para cada clase tienen atributos adicionales tales como si es de multijugador en los videojuegos, o la cantidad total de episodios en la serie.

Una vez que he creado todas las clases, puedo trabajar con esos datos. En el primer avance de mi proyecto, presentaré lo que he aprendido con el uso de algoritmos de ordenamiento. Mi objetivo es implementar un algoritmo Quick Sort (con complejidad de O(nlog(n) en el promedio de los casos, el quick sort es el mejor algoritmo de ordenamiento para utilizar) para poder ordenar las opciones de los objetos creados (utilizaré un vector conteniendo 6 películas para empezar y probar que mi quick sort funciona).

Mi objetivo es poder ordenar estas películas por los valores numéricos (de int). Empezando por el año. Es posible guardar estos objetos en diferentes estructuras de datos lineales como listas doblemente ligadas, o árboles para poder trabajar con ellas, como hemos visto en clase.

## Descripción del avance 1
En esta siguiente entrega de avance, mi tarea fue implementar una estructura de datos adecuada al programa. En mi primera entrega, ordené adecuadamente la lista con un algoritmo de ordenamiento, sin embargo, quería saber que pasaba si guardaba las películas en una estructura de datos de una lista doblemente ligada. En esta entrega, cree una lista doblemente ligada llamada myLibraryLinked, al final de la ejecución del programa. En esta lista, guarde el dato de año de cada una de las 6 películas creadas. Con este dato numérico (int), puedo trabajar con esta lista de diversas maneras.

Al final de mi programa, utilicé algoritmos de búsqueda y que regresan la longitud de la lista para entender la implementación de estos algoritmos en la estructura de datos. 


## Descripción del avance 2
En esta siguiente entrega del avance, mi tarea fue implementar una estructura de datos adecuada al programa. En mi primera entrega, ordené adecuadamente la lista con un algoritmo de ordenamiento, sin embargo, quería saber que pasaba si guardaba las películas en una estructura de datos de una lista doblemente ligada. En esta entrega, cree una lista doblemente ligada llamada myLibraryLinked, al final de la ejecución del programa. En esta lista, guarde el dato de año de cada una de las 6 peliculas creadas. Con este dato numérico (int), puedo trabajar con esta lista de diversas maneras.

Al final de mi programa, utilice algoritmos de búsqueda y que regresan la longitud de la lista para entender la implementación de estos algoritmos. Elegí la lista doblemente ligada porque ofrece ventajas sobre la single linked list. La primera, es que puedo insertar o borrar un nuevo nodo con más facilidad ANTES de el nodo actual, esta es la ventaja principal, ya que el nodo actual de la lista ligada puede apuntar a el nodo que está antes o después de él. Esto lo argumentaré más a fondo.

### Cambios sobre el primer avance
1. Cambio 1: Arreglé el problema que hizo que no compilara mi programa la vez pasada.
2. Cambio 2: Arreglé faltas de ortografía en los comentarios.

## Descripción del avance 3
En el tercer avance de mi proyecto, quise enfocarme en un objetivo principal, que es el uso de entradas y salidas para el uso de mis algoritmos. Para eso, creé dos archivos: uno llamado pelis_entrada.txt, y otro llamado pelis_salida.txt.

“pelis_entrada.txt” contiene 48 líneas, 8 atributos para cada una de mis 6 películas. Mi objetivo es que cada uno de las películas, comenzando con valores vacíos, pudiera aceptar estos valores nuevos. Sin embargo, puse las entradas con los años incorrectos, para que pueda cambiarlos dentro de los algoritmos y para la salida, estén correctos.

En “pelis_salida.txt” imprimo un bloque de texto describiendo los atributos de cada película, junto con los años corregidos. Pude lograr ambos objetivos exitosamente.

Por ultimo, en esta parte del programa, pude sortear exitosamente dentro de un vector las diferentes películas mediante una sobrecarga de operadores. Con la función compareByYear dentro de sobrecarga.h, pude lograr esto de forma exitosa, imprimiendo el resultado. También probé diferentes aplicaciones para mi lista doblemente ligada, para que en mi entrega final del proyecto pueda aplicar exitosamente el quickSort y analizar la complejidad final del programa.


### Cambios sobre el segundo avance
Cambio 1: Agregar las funciones de entrada y salida de texto, para poder probar mi competencia manejando entradas y salidas de archivos en un programa.
Cambio 2: utilizar la sobrecarga de operadores para sortear mi lista de películas por su atributo (línea 183 de main).
Cambio 3: Arreglé faltas de ortografía en los comentarios. Y agregué más contexto para los objetivos que quería realizar.

## Entrega final
En la entrega final del programa, quise enfocarme en dos objetivos principales. El primero es la aplicación del algoritmo merge sort. En entregas pasadas, utilice un algoritmo de bubble sort para sortear mis vectores. Pero después de retroalimentación, me di cuenta de que es mejor utilizar un algoritmo de ordenamiento de mejor complejidad de tiempo. Para esto, es necesario hacer lo mismo, pero a través de un algoritmo quick o merge sort. Intente aplicar el quick sort, pero no fue posible aplicarlo a mis listas ligadas o vectores. Así que decidí utilizar el Merge Sort, ya que tiene una complejidad similar o incluso mejor: O(n log (n)) en el mejor, promedio, e incluso peor de los casos.

Mi segundo objetivo, es argumentar por que utilice una lista doblemente ligada como mi estructura de datos. Al final de mi programa, hice algunos ejercicios con las diferentes funciones de la lista doblemente ligada. Mi argumento es que si decido agregar nuevos nodos con elementos ANTES del nodo que elija, es más fácil y rápido recorrer la lista si apunta en ambas direcciones, a diferencia de la lista simple que solo se puede recorrer en una sola dirección. La desventaja de mi lista doblemente ligada es que ocupa más espacio en la memoria que la lista simple.


### Cambios sobre el tercer avance
Cambio 1: Reemplazo de mis shorts por un merge sort, probando su funcionalidad.
Cambio 2: Nuevos ejercicios para mi lista doblemente ligada.

## Instrucciones para compilar el proyecto
Ejecuta el siguiente comando en la terminal:
Presionar el botón verde de Run en la parte superior para correr el main.cpp

## Instrucciones para ejecutar el proyecto
Ejecuta el siguiente comando en la terminal:
Presionar el botón verde de Run en la parte superior para correr el main.cpp

## Descripción de las entradas del avance de proyecto
La única entrada son las 48 líneas dentro del archivo “pelis_entrada.txt” que es utilizado para agregar los datos a atributos.

## Descripción de las salidas del avance de proyecto
En el archivo main.cpp(), escribí en los comentarios paso por paso que es lo que quiero que salga en la terminal de mi programa. Primero, creo los 6 objetos de película. Al final de la creación de cada objeto, muestro una función llamada showData (una función virtual) que despliega un texto con los datos de cada objeto para confirmar que se ha creado. (por ejemplo, dice “El item catalogado es The Batman, es una película, salió en 2022… etc.).

Después, realicé una serie de pruebas para asegurarme de que mis implementaciones de vectores y los algoritmos de ordenamiento funcionan correctamente. Después, cree un vector de prueba llamado “números”, donde utilizando push_back, le añadí 6 elementos. Después, imprimí la lista desordenada. Apliqué el sort como lo hicimos en clase (creando una clase Sorts que contiene los algoritmos de ordenamiento). Al final funcionó.

Una vez que me aseguré que mi algoritmo de funciona, es momento de aplicarlo a mi lista de películas. Después de imprimir la lista desordenada, aplique el sort de una forma en la que pueda ordenar los objetos por el año en que salieron, y después por la calificación que les dí, ambos datos tipo int que se pueden manipular en este algoritmo.

Por último, el archivo “pelis_salida.txt” contiene las 6 películas con los años corregidos exitosamente. Ahí se despliega el texto mostrando como cada objeto puede mostrar sus atributos y utilizarlos para diferentes contextos dentro de un programa.


## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
El algoritmo de ordenamiento que utilizaré para este programa es el de Merge Sort. Lo elegí porque es el algoritmo de ordenamiento más efectivo en complejidad y tiempo de compilación (junto con quick sort). Merge tiene una complejidad de O(nlog(n)) en el mejor, promedio, y peor de los casos (complejidad muy buena). Ya que se divide a la mitad y tiene que llamar a otros algoritmos dentro de sí para que hagan la misma operación (mergeSplit para cada mitad, para luego ser juntados en mergeArray). Comparado con otros algoritmos, que pueden llegar a complejidades de O(n^2) o mayor, incluso en el mejor de los casos, merge siempre será la opción indicada.

La razón por la que merge sort tiene buena complejidad, es debido al hecho de que utiliza tiempo constante. Osea que siempre tendrá un tiempo de ejecución estable de O(n log (n)), a comparación de otros algoritmos que sus tiempos pueden variar dependiendo de la longitud de la lista. También usa funciones recursivas para cada mitad de la lista antes de juntarlas. Este proceso se puede reproducir infinitamente hasta que la lista queda ordenada.

Otra razón por la que merge sort es bueno, y le da una ventaja sobre quick sort, es por el hecho de que usa ordenamiento estable por default. Esto significa que dos elementos de mismo valor mantendrán la misma posición relativa que tenían al final del algoritmo que cuando entraron. En vez de otros algoritmos donde estos valores pueden cambiar. Esto ofrece ventajas en términos de eficiencia.

Por último, un ejemplo importante de por qué es más ético y efectivo el uso de merge sort (en cualquier programa) a comparación de los “lentos” como bubble o insertion, es cuando se aplica a listas largas, desde miles hasta millones de elementos. Incluso si los lentos son más efectivos en casos cortos (listas de 10 o 100 elementos por su complejidad O(n) en el mejor de los casos), cuando se llegan a listas enormes, su tiempo crece exponencialmente (O(n^2)), esto tomaría demasiado tiempo, por lo que es buena práctica utilizar merge para que se aplique O(n log (n)) en todos los casos.


#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
En mi proyecto, utilicé tanto vectores, listas doblemente ligadas (con sus respectivas funciones como add(), search(), length(), delete(), etc.
La principal estructura de datos que utilice en mi programa es la lista doblemente ligada. La razón por la que la elegí la doblemente ligada, es debido a la naturaleza de la lista de películas que quiero utilizar. En una estructura de datos lineal, es fácil manejar una lista y aplicar funciones, tales como checar el tamaño de la lista, checar la posición de algún elemento, y también insertar o quitar elementos dentro de la lista.

La ventaja principal de una lista doblemente ligada es que se pueden acceder los nodos anteriores en la lista de una forma más eficiente desde el nodo actual de la lista, a diferencia de la ligada que solo avanza en una dirección. Este hecho se puede aplicar a funciones como insertar, eliminar, o regresar un valor de la lista. Finalmente, en mi futuro como programador, una lista doblemente ligada es preferible a estructuras de datos como arreglos o vectores cuando se necesitan recorrer grandes cantidades de datos, y poder insertar y eliminar nodos de una forma eficiente.

La única desventaja de la lista doblemente ligada es que ocupa más espacio en memoria que una simple. Sin embargo decidí que no sería un problema ya que la ventaja en términos de complejidad de tiempo es preferible para poder manipular elementos antes y después del nodo actual, a diferencia de solamente después.
Para mi análisis de complejidad, es necesario tomar en cuenta varias cosas, incluyendo las funciones que elegí, la cantidad de información utilizada, y de qué forma se utilizan. Por fortuna, muchos de estos algoritmos de búsqueda y para hacer cosas como agregar y borrar elementos, tienen un tiempo de complejidad bastante rápido. Dentro del rango de O(1), O(log n), u O(n). Por ejemplo, búsqueda tiene una complejidad de O(n) en el peor caso, cuando se recorre la lista para encontrar el nodo indicado.

Esto ofrece muchas ventajas, ya que para diseñar programas a larga escala, no es necesario tomar estos algoritmos aplicados a estructuras de datos. Mas bien el enfoque debe de centrarse en algoritmos con una complejidad de O(n log n) o mayor.


#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
En estructuras de datos y algoritmos, analizar la complejidad final de nuestro programa es importante para determinar la efectividad de su ejecución y el tiempo requerido. Para esto, tomaré el tiempo de ejecución mayor de mi programa.

Muchas de las funciones y algoritmos simples utilizados tienen una complejidad eficiente, como O(1), O(log n), u O(n). Las funciones utilizadas en las estructuras de datos también tienen una complejidad simple, como mencione en el punto anterior. Así que afortunadamente, no deberían de preocuparnos tanto.

El algoritmo más complejo en mi programa seria la del algoritmo de ordenamiento. Como mencioné antes, merge sort tiene una complejidad de O(n log n), ya que se divide a la mitad y tiene que llamar a otros algoritmos dentro de sí. Aunque en sí, es bueno que utilizamos el más eficiente. Por lo tanto, concluí que utilizando el algoritmo de merge sort (con complejidad de O(n log n), la complejidad total de mi programa es la misma (O(n log n).

Al final, el análisis de complejidad es importante. Como programador, buscar las opciones más eficientes de diseño en un programa es crucial para evitar tiempos lentos de compilación. Como regla, una vez que mis programas empiecen a tener una complejidad de O(n^2) o mayor, es tiempo de buscar otras opciones para lograr el resultado deseado.


### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
En este proyecto, utilizaré el merge sort para ordenar exitosamente un vector con diferentes números int (el vector “números” en el main()).Esto se puede ver corriendo el código en las líneas 116 a 121 del main. Pude aprender exitosamente el uso de un algoritmo de ordenamiento, tanto en arreglos como vectores, como se puede evidenciar en este proyecto.

También aprendí los usos de los mismos vectores, agregando exitosamente los objetos de las películas al vector, y poder desplegar sus datos que puedo acceder en forma de lista por un loop de for (líneas 125 a 130).

Al final, la primera entrega de este proyecto me retó bastante y me dejó con muchas habilidades que quiero seguir puliendo durante la duración del curso, en especial cuando empecemos a ver estructuras de datos y como implementarlas con clases y objetos. Me siento muy contento de haber aprendido estas habilidades.


#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
Lo que yo quería hacer con este proyecto es expandir mis conocimientos trabajando con los objetos creados en mi primera entrega. Utilizando objetos y sus atributos para trabajar con ellos y reforzar mis habilidades de programación orientada a objetos usando algoritmos y estructuras de datos.

Para los experimentos de diferentes cosas que quería aprender e implementar, utilicé los vectores. Así, pude poco a poco reforzar mi conocimiento al implementar cambios pequeños y luego ver como se pueden escalar.

En esta entrega, utilice una lista doblemente ligada en vez de una simple ya que puede acceder datos que vienen detrás y los datos que vienen adelante en la lista lineal. Esto me permite por ejemplo, hacer sumas utilizando ints de los atributos como la duración de la película de un objeto junto con los que vienen detrás de él, como con los de adelante. El punto es poder acceder cualquier dato por medio de sus apuntadores, no importa de donde lo acceda.

La naturaleza de mi programa es lineal, ya que es una lista de diferentes objetos que van en orden ascendiente y descendiente. Fue para mi difícil encontrar usos para estructuras de datos no lineales como árboles. Al final decidí utilizar esta estructura ya que ofrece una forma más eficiente para trabajar con mucha información. Esto también es porque en muchos sitios en internet que trabajan con librerías, muchos de las opciones catalogadas están en formatos lineales. Por ejemplo, las listas de mejores películas en sitios como Letterboxd, que son ordenadas por popularidad, cantidad de vistas, rating promedio de los usuarios, etc. Y para mis objetivos, eso ayuda para el tiempo de compilación del programa. 


### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
En esta actividad, utilice los algoritmos de add(), search(), y length(), para consultar distintos datos de mi lista doblemente ligada. En el main, lo combiné con mensajes que nos regresan información y el usuario sepa que es lo que estamos buscando.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
En esta entrega, mi objetivo principal fue implementar la lectura de archivos utilizando datos de un .txt externo, y utilizar esos datos para agregar cada línea a un atributo de mis objetos en el programa. Fue muy retador, pero al final pude lograrlo. Es importante mencionar que siempre quise trabajar con objetos y atributos para reforzar las habilidades aprendidas en mi clase anterior.

El archivo toma los datos de “pelis_entrada.txt”, y agrega cad línea en orden a los atributos de los 6 diferentes objetos. Aquí utilice funciones que vienen en <fstream> tales como open() y close(), que abren nuestro programa, y getline(), que obtiene una de las líneas de nuestro archivo para utilizarlo.


### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta
Una vez que haya trabajado con las entradas de “pelis_entrada.txt”, el siguiente paso es exportar los cambios realizados dentro del programa a un archivo externo. En “pelis_salida.txt”, escribí un mensaje para cada película con sus atributos correspondientes, y el año de la película incorrecto corregido. Esto es para probar que puedo trabajar con datos del exterior, y exitosamente modificar otro archivo.