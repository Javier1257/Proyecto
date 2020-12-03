# TC1033 Proyecto

Este proyecto se ha hecho con fines escolares como entrega final para el apartado del proyecto final para la materia TC1033.

# Contexto

Un amigo te pide ayuda con un proyecto personal suyo, el es un amante de los video juegos y esta interasdo en crear el suyo propio pero aun 
tiene mucho que aprender por lo que te pide ayuda con un pequeño diseño de juego por turnos para empezar e ir entrenando; porlo que genera
una estructura de clases para poder definir los diferentes objetos que interectuaran entre si durante la partida, entonces una de estas clases 
es la de personaje donde ingresan todos los atributos para cada personaje posible jugable; puesto que es algo sencillo para empezar a practicar
decide generar solo dos personajes un arquero y un guerreo cada uno con una habilidad especial que utilizar, la segunda clase es la del arma donde
se ingresa el ataque de esta y su nombre y siguiendo la misma linea que con la clase personaje solo se generan dos armas. arcos para los arqueros 
que pueden lanzar flecahs especiales y escudos y espadas para los guerreros con su propia habilidad especial, por ultimo la clase del mounstruo ya 
que es un simulador de lucha por lo que se definene sus atributos y metodos.

# Funcionalidad

- El programa solo permite usar un personaje y un solo arma, además de enfrentar solo a un mounstruo.

- El personaje tiene 3 turnos para atacar o curarse antes de que el mounstruo lanza un golpe y al
  cuarto turno este arroja un zarpaso que es un golpe más fuerte de lo usual.

- Durante cada turno se genera un menu de opciones con las acciones posibles

# Consideracciones

El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

Compilar con: "g++ Main.cpp"

Correr en linux: "/a.out"

Correr en windows: "a.exe"

# Correcciones

Para este programa se realizaron las siguientes correcciones:

1.- Se replanteo el proyecto por lo que fue reestructurado y desarrollado desde cero
