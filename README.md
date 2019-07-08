
# Cascodrilo - 2019

Este proyecto se basa principalmente en generar un robot de combate, el cual, posea materiales reciclados, para que de esta forma sea amigable con el medioambiente, así el battlebot está diseñado con dos principales mecanismos, uno de ellos es la parte eléctrica, por lo que se utilizó el programa Arduino para llevar la mayoría de los movimientos a cabo. La otra es la parte mecánica, que funciona a la par con el sistema eléctrico, ya que se ocupan resortes, para conseguir más potencia en el arma del robot.

![Cascodrilo](/multimedia/casco2.JPG)


## Integrantes
- Jesús Cáceres - FCFM
- Karen Jara - FCFM
- Valentina Vásquez - FCFM
- Claudio Zúñiga - FCFM


## Descripción del proyecto

Inicialmente se describirá la forma y los componentes utilizados en la creación y formación del robot. Por lo que es importante destacar la restricciones presentes para la creación de este, así estas fueron, que pesara menos de 4.5 Kg, y que tuviera una altura, ancho, profundidad máxima de 30 cm cada una.
Es por ello que primeramente se pensó en qué arma utilizar, cuál sería la mejor estrategia de combate, ya que en función de esto se generaría la forma del robot. Por lo que se decidió por una palanca la cual estuviera con cierta inclinación del robot al suelo, de tal forma que los battlebots contrincantes quedaran arriba de esta, para que así, mediante cierta tracción esta palanca los impulsara hacia arriba, para que por efecto de la aceleración de gravedad caigan y se debiliten. Luego, se optó por una base similar a el Halcón milenario de Star Wars

![Imagen de referencia](/multimedia/imagen_apoyo.jpg)

Ya que, en la fisura central se encuentra la palanca, la cual es traccionada mediante un servo y un resorte. En la parte de abajo, ya más cercana a la parte circular, posee dos ruedas, las cuales se controlan mediante dos motores DC, los cuales son independientes el uno del otro. Además posee una rueda cercano al lugar de la fisura, que es más pequeña que las otras dos, para que así le de una pequeña inclinación natural, y que de esta forma el battlebot alcance a robots de combate que sean más bajos a él. Lo que protege su interior (circuitos), es un casco, el cual, también lo protegerá de fuerzas externas que puedan dañarlo.

### Estrategia utilizada

#### Ofensiva
Su defensa es un casco, lo que inspiró el nombre, el cual se encarga de proteger el circuito y las partes electronicas del robot, en las peleas demostró ser bastante efectivo para protegerlo.

#### Defensiva
El robot intentará quedar de tal forma, que la palanca quede bajo el otro, para así impulsarlo hacia arriba y que caiga, en el mejor de los casos, que quede dado vuelta, para que así no tenga posibilidades de moverse y empujarlo hasta que caiga. Si bien el arma es bastante efectiva en la teoría, debido a que, la mayoría de los battlebots no presentan una defensa para este tipo de ataque, lo complejo es llevarlo a cabo, ya que la energía que se necesita es alta, y al no presentar un arma de defensa, es bastante propenso a ser destruido con las armas de los contrincantes.

### Diagrama funcional
Se adjuntan 3 imagenes con el diagrama de flujo

![Parte1](/multimedia/parte1xd.jpg)

![Parte2](/multimedia/parte2.jpg)

![Parte3](/multimedia/xddddd.jpg)

### Paso a Paso
Materiales a utilizar:
4 Baterías de 3.7V
1 Arduino Uno
2 Motores DC
2 Servo motores
Cables de arduino
Madera MDF 3mm
Madera MDF 5mm
Silicona caliente
Casco
Palos de maqueta
2 ruedas grandes
1 Rueda más pequeña

Instrucciones de armado.
1.	Diseñar e imprimir en cortadora laser las siguientes piezas:

Palanca [7,5x3]cm
![Palanca](/multimedia/plano1.jpg)

Artefacto que alineará a la palanca para que esta no se salga de su eje, son necesarias 2 [4x2]cm
![Cosa](/multimedia/plano2.jpg)

Base en la cual se pondrán los circuitos [20x20]cm
los orificios son de 5 milimetros por 3 centímetros
y el sacado es de 5x3,5 cm
![Base](/multimedia/plano3.jpg)

2.	Estas piezas están hechas para ser ensambladas con facilidad, por lo que, pondremos la base y la placa de soporte juntas, en los orificios que posee la primera, ubicaremos lo que sobresale de la segunda. Para que esto permanezca firme, lo pegaremos con silicona caliente.

3.	Una vez listo el paso anterior, ubicaremos los orificios de la placa de soporte (ya pegada a la base) con la lateral juntos, de tal forma que el palo de maqueta quepa en medio, así en un borde del palo de maqueta, colocamos una aureola de silicona caliente y esperamos a que se seque, con cuidado de no juntar el palo de maqueta con la placa, la función de esto es generar una especie de tope para no desalinear el movimiento, repetimos este paso para ambos lados, así cortamos lo que sobre de palo de maqueta y repetimos el colocar silicona el otro extremo.

4.	Luego, es posible notar que hay dos agujeros presenten en las piezas laterales, entre ellas debe haber un palo de maqueta que las una y atraviese tales hoyos, así debemos cortar la madera sobrante y pegar con silicona caliente.

5.	Luego colocar y pegar una bisagra en el centro, en medio del sacado grande, donde se encuentran ubicadas las piezas de soporte, y pegar un extremo de la palanca a ella, así la palanca debe estar sobre el palo de maqueta atravesado entre las dos placas.

6.	Las ruedas se deben ubicar en los agujeros más grandes presentes en la base, estas deben estar ligadas a los motores DC, los cuales se encontraran pegados por abajo a la base.

7.	Cuando se haya ubicado el Arduino y lo complementario a este, dentro de el área basal, es posible pegar el casco el cual será cortado sin medidas precisas, sino que acomodándolo como mejor quede (el cómo van distribuidos los cables del arduino y las baterías está especificado en otra sección).


## Licencia
<a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/"><img alt="Licencia Creative Commons" style="border-width:0" src="https://i.creativecommons.org/l/by-nc/4.0/88x31.png" /></a><br />Esta obra está bajo una <a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/">Licencia Creative Commons Atribución-NoComercial 4.0 Internacional</a>.
