#include <iostream> 
using namespace std; 

int main () 
{ 
int x; 
float planetas, estrellas, distancia, galaxias;

cout<<"desea saber, la distancia y la descricion de, planetas de este  sistema solar y estrellas  y galaxias "<<endl;
cout<<"Escriba 1. para planetas o 2. para estrellas 3. para galaxias  solo numeros"<<endl;
cin>>x;

  if (x == 1 || x == 2 || x == 3) {	
	
	

 switch (x)
 {
	case 1: 
	cout<<"Ingrese el planeta " <<endl;
	cout<<"1: Mercurio /  2: Venus /  3: La Tierra	/  4: Marte  / 5: Júpiter /  6: Saturno / 7: Urano / 8: Neptuno" <<endl;
	cout<<"ELIJA CON NUMERO" <<endl;
	cin>> planetas;
	

	
	  if (planetas == 1) {
		           cout<< "mercurio"<<endl;
		
		            cout<< "57.910.000 km. Categoría Planeta. Mercurio es el planeta del sistema solar más próximo al Sol y el más pequeño. Forma parte de los denominados planetas interiores o terrestres y carece de satélites naturales al igual que Venus. Se conocía muy poco sobre su superficie hasta que fue enviada la sonda planetaria Mariner 10 y se hicieron observaciones con radar y radiotelescopios.Antiguamente se pensaba que Mercurio siempre presentaba la misma cara al Sol, situación similar al caso de la Luna con la Tierra; es decir, que su periodo de rotación era igual a su periodo de traslación, ambos de 88 días. Sin embargo, en 1965 se mandaron impulsos de radar hacia Mercurio, con lo cual quedó definitivamente demostrado que su periodo de rotación era de 58,7 días, lo cual es 2/3 de su periodo de traslación. Esto no es coincidencia, y es una situación denominada resonancia orbital. Al ser un planeta cuya órbita es interior a la de la Tierra, lo observamos pasar periódicamente delante del Sol, fenómeno que se denomina tránsito astronómico. Observaciones de su órbita a través de muchos años demostraron que el perihelio gira 43 de arco más por siglo de lo predicho por la mecánica clásica de Newton. Esta discrepancia llevó a un astrónomo francés, Urbain Le Verrier, a pensar que existía un planeta aún más cerca del Sol, al cual llamaron Vulcano, que perturbaba la órbita de Mercurio. Ahora se sabe que Vulcano no existe; la explicación correcta del comportamiento del perihelio de Mercurio se encuentra en la teoría general de la relatividad."<< endl;
	                }
	
	  if (planetas == 2) {
			        cout<< "Venus"<<endl;
			  
			          cout<<" / 108.200.000 km / Categoría Planeta. Venus es el segundo planeta del sistema solar en orden de distancia desde el Sol, el sexto en cuanto a tamaño, ordenados de mayor a menor. Al igual que Mercurio, carece de satélites naturales. Recibe su nombre en honor a Venus, la diosa romana del amor (gr. Afrodita). Se trata de un planeta de tipo rocoso y terrestre, llamado con frecuencia el planeta hermano de la Tierra, ya que ambos son similares en cuanto a tamaño, masa y composición, aunque totalmente diferentes en cuestiones térmicas y atmosféricas (la temperatura media de Venus es de 463,85 ºC). La órbita de Venus es una elipse con una excentricidad de menos del 1 %, formando la órbita más circular de las de todos los planetas; apenas supera la de Neptuno. Su presión atmosférica es 90 veces superior a la terrestre; es, por tanto, la mayor presión atmosférica de las de todos los planetas rocosos del sistema solar."<< endl;
		          }
		
        if (planetas == 3) {
			       cout<< " La Tierra "<<endl;
					
			      cout<< " / 146.600.000 km/ Categoría Planeta. La Tierra (del latín Terra)  deidad romana equivalente a Gea, diosa griega de la feminidad y la fecundidad) es un planeta del sistema solar que gira alrededor de su estrella el Sol en la tercera órbita más interna. Es el más denso y el quinto mayor de los ocho planetas del sistema solar. También es el mayor de los cuatro terrestres o rocosos. La Tierra se formó hace aproximadamente 4550 millones de años y la vida surgió unos mil millones de años después.​ Es el hogar de millones de especies, incluyendo los seres humanos y actualmente el único cuerpo astronómico donde se conoce la existencia de vida.​ La atmósfera y otras condiciones abióticas han sido alteradas significativamente por la biosfera del planeta, favoreciendo la proliferación de organismos aerobios, así como la formación de una capa de ozono que junto con el campo magnético terrestre bloquean la radiación solar dañina, permitiendo así la vida en la Tierra. Las propiedades físicas de la Tierra, la historia geológica y su órbita han permitido que la vida siga existiendo. Se estima que el planeta seguirá siendo capaz de sustentar vida durante otros 500 millones de años, ya que según las previsiones actuales, pasado ese tiempo la creciente luminosidad del Sol terminará causando la extinción de la biosfera"<< endl;
				}
				
         if (planetas == 4) {
				cout<< " Marte "<<endl;
			       cout<< " / 227.940.000 km / Categoría Planeta. Marte, en la puerta de París de la ciudad de Lille. En la mitología romana, Marte, en latín Mārs, era el dios de la guerra, hijo de Júpiter en forma de flor y de Juno. Se le representaba como a un guerrero con armadura y con un yelmo encrestado. El lobo y el pájaro carpintero eran sus símbolos. Era marido de Bellona y amante de Venus, con quien tuvo dos hijos: Fuga y Timor (respectivamente Deimos y Fobos para los griegos). Fue identificado con el Ares griego, pero Marte no es simplemente un Ares romanizado, sino una deidad puramente itálica, patrón de muchas ciudades, como Alba Longa y tribus como la de los sabinos y los etruscos (se cree que el nombre Mars, sin derivaciones indoeuropeas, proviene del etrusco Maris), antes del surgimiento de Roma. Marte dio nombre al cuarto planeta del sistema solar: Marte, al segundo (o tercero según algunas religiones, calendarios o regiones como en EE.UU.) día de la semana: Martes y al tercer mes del año: marzo."<< endl;
				   }
				
	 if (planetas == 5) {
				cout<< " Júpiter "<<endl;
				 cout<< " / 778.330.000 km/ Categoría Planeta. Júpiter es el quinto planeta del sistema solar. Forma parte de los denominados planetas exteriores o gaseosos. Recibe su nombre del dios romano Júpiter (Zeus en la mitología griega). Se trata del planeta que ofrece un mayor brillo a lo largo del año dependiendo de su fase. Es, además, después del Sol, el mayor cuerpo celeste del sistema solar, con una masa casi dos veces y media la de los demás planetas juntos (con una masa 318 veces mayor que la de la Tierra y tres veces mayor que la de Saturno, además de ser, en cuanto a volumen, 1317 veces más grande que la Tierra). También es el planeta más antiguo del sistema solar, siendo incluso más antiguo que el sol; este descubrimiento fue realizado por investigadores de la universidad de Münster en Alemania. Júpiter es un cuerpo masivo gaseoso, formado principalmente por hidrógeno y helio, carente de una superficie interior definida. Entre los detalles atmosféricos destacan la Gran Mancha Roja (un enorme anticiclón situado en las latitudes tropicales del hemisferio sur), la estructura de nubes en bandas oscuras y zonas brillantes, y la dinámica atmosférica global determinada por intensos vientos zonales alternantes en latitud y con velocidades de hasta 140 m/s (504 km/h)."<< endl;
				 }
				
				if (planetas == 6) {
				cout<< " Saturno "<<endl;
				cout<< " / 1.429.400.000 km/ Categoría Planeta. Júpiter es el quinto planeta del sistema solar. Forma parte de los denominados planetas exteriores o gaseosos. Recibe su nombre del dios romano Júpiter (Zeus en la mitología griega). Se trata del planeta que ofrece un mayor brillo a lo largo del año dependiendo de su fase. Es, además, después del Sol, el mayor cuerpo celeste del sistema solar, con una masa casi dos veces y media la de los demás planetas juntos (con una masa 318 veces mayor que la de la Tierra y tres veces mayor que la de Saturno, además de ser, en cuanto a volumen, 1317 veces más grande que la Tierra). También es el planeta más antiguo del sistema solar, siendo incluso más antiguo que el sol; este descubrimiento fue realizado por investigadores de la universidad de Münster en Alemania. Júpiter es un cuerpo masivo gaseoso, formado principalmente por hidrógeno y helio, carente de una superficie interior definida. Entre los detalles atmosféricos destacan la Gran Mancha Roja (un enorme anticiclón situado en las latitudes tropicales del hemisferio sur), la estructura de nubes en bandas oscuras y zonas brillantes, y la dinámica atmosférica global determinada por intensos vientos zonales alternantes en latitud y con velocidades de hasta 140 m/s (504 km/h)."<< endl;
							 }

				if (planetas == 7) {
				cout<< " Urano "<<endl;
			      cout<< "2.870.990.000 km"<<endl;
			cout<<"Categoría Planeta. Urano es el séptimo planeta del sistema solar, el tercero de mayor tamaño, y el cuarto más masivo. Se llama así en honor de la divinidad griega del cielo Urano (del griego antiguo «Οὐρανός»), el padre de Crono (Saturno) y el abuelo de Zeus (Júpiter). Aunque es detectable a simple vista en el cielo nocturno, no fue catalogado como planeta por los astrónomos de la antigüedad debido a su escasa luminosidad y a la lentitud de su órbita.13​ Sir William Herschel anunció su descubrimiento el 13 de marzo de 1781, ampliando las fronteras entonces conocidas del sistema solar, por primera vez en la historia moderna. Urano es también el primer planeta descubierto por medio de un telescopio. Urano es similar en composición a Neptuno, y los dos tienen una composición diferente de los otros dos gigantes gaseosos (Júpiter y Saturno). Por ello, los astrónomos a veces los clasifican en una categoría diferente, los gigantes helados. La atmósfera de Urano, aunque es similar a la de Júpiter y Saturno por estar compuesta principalmente de hidrógeno y helio, contiene una proporción superior tanto de «hielos»nota 4​ como de agua, amoníaco y metano, junto con trazas de hidrocarburos.9​nota 5​ Posee la atmósfera planetaria más fría del sistema solar, con una temperatura mínima de 49 K (-224 °C). Asimismo, tiene una estructura de nubes muy compleja, acomodada por niveles, donde se cree que las nubes más bajas están compuestas de agua y las más altas de metano.9​ En contraste, el interior de Urano se encuentra compuesto principalmente de hielo y roca."<< endl;
				}
				
				if (planetas == 8) {
				cout<< " Neptuno "<<endl;
			      cout<< "4.504.300.000 km"<<endl;
			      cout<< "Categoría Planeta. Neptuno es el octavo planeta en distancia respecto al Sol y el más lejano del sistema solar. Forma parte de los denominados planetas exteriores o gigantes gaseosos, y es el primero que fue descubierto gracias a predicciones matemáticas. Su nombre fue puesto en honor al dios romano del mar —Neptuno—, y es el cuarto planeta en diámetro y el tercero más grande en masa. Su masa es diecisiete veces la de la Tierra y ligeramente mayor que la de su planeta «gemelo» Urano, que tiene quince masas terrestres y no es tan denso. En promedio, Neptuno orbita el Sol a una distancia de 30,1 ua. Su símbolo astronómico es ♆, una versión estilizada del tridente del dios Neptuno.Tras el descubrimiento de Urano, se observó que las órbitas de Urano, Saturno y Júpiter no se comportaban tal como predecían las leyes de Kepler y de Newton. Adams y Le Verrier, de forma independiente, calcularon la posición de un hipotético planeta, Neptuno, que finalmente fue encontrado por Galle, el 23 de septiembre de 1846, a menos de un grado de la posición calculada por Le Verrier. Más tarde se advirtió que Galileo ya había observado Neptuno en 1612, pero lo había confundido con una estrella. Neptuno es un planeta dinámico, con manchas que recuerdan las tempestades de Júpiter. La más grande, la Gran Mancha Oscura, tenía un tamaño similar al de la Tierra, pero en 1994 desapareció y se ha formado otra. Los vientos más fuertes de cualquier planeta del sistema solar se encuentran en Neptuno."<< endl;
				}
break;


	case 2: 
		cout<<"Ingrese la estrella " <<endl;
		cout<<"1:  Proxima Centauri /  2: Barnard /  3: Wolf 359  /  4: Sirio  / 5: Luyten 726-8 /  6: Ross 154 / 7: Epsilon Eridani / 8: Lacaille 9352  9: Antares / 10: Aldebaran / 11: Regulus / 12: Betelgeuse" <<endl;
		cin>> estrellas;

	 if (estrellas == 1) {
		           cout<< "Proxima Centauri "<<endl;
		
		            cout<< "Luyten 726-8 (L 726-8 / Gliese 65) es el séptimo sistema estelar más cercano al sistema solar, estando situado a 8,73 años luz de distancia.1​ Las estrellas más cercanas a este sistema son τ Ceti e YZ Ceti, respectivamente a 3,2 y 3,6 años luz de distancia. Visualmente se encuentra en la constelación de Cetus, al noreste de Deneb Kaitos (β Ceti), no siendo visible a simple vista.2​ Fue descubierto en 1949 por Willem Jacob Luyten cuando estaba recopilando datos para un catálogo de las estrellas con mayor movimiento propio; observó su movimiento propio especialmente alto de 3,37 segundos de arco por año, denominando al sistema Luyten 726-8.3​ Las estrellas que lo forman son dos enanas rojas; una de ellas, Luyten 726-8 B —conocida como UV Ceti—, es un ejemplo típico de estrella fulgurante. Luyten 726-8 B (GJ 65 B / LHS 10)4​ tiene tipo espectral M6V y su masa es un 10 % de la masa solar. En condiciones normales su luminosidad es inferior a cuatro cienmilésimas de la luminosidad solar, pero puede multiplicar su brillo por cinco en menos de un minuto para después regresar a su brillo normal en unos dos o tres minutos. En 1952 su brillo aumentó 75 veces en cuestión de 20 segundos. Aunque Luyten 726-8 B no fue la primera estrella fulgurante en descubrirse, es un ejemplo notable de esta clase de variables, y de hecho este tipo de estrellas también son llamadas estrellas UV Ceti.​"<< endl;
	                }
	
	  if (estrellas == 2) {
			        cout<< "Barnard"<<endl;
			  
			          cout<<"La Estrella de Barnard (HIP 87937)1​ es una estrella en la constelación de Ofiuco. De magnitud aparente +9,51, es demasiado tenue para poder ser observada sin telescopio. Debe su nombre al astrónomo estadounidense Edward Emerson Barnard, quien en 1916 descubrió que es la estrella con un mayor movimiento aparente (10,3 segundos de arco por año) vista desde la Tierra.2​ La Estrella de Barnard ha sido objeto de numerosos estudios, debido a su proximidad y a su posición favorable para la observación cerca del ecuador celeste.3​ Históricamente, la investigación en la Estrella de Barnard se ha centrado en medir sus características físicas, su astrometría, y en refinar los límites de posibles planetas extrasolares. Asimismo, pese a que la Estrella de Barnard es una estrella antigua, ciertas observaciones sugieren que experimenta llamaradas como las de las estrellas fulgurantes."<< endl;
		          }
		
        if (estrellas == 3) {
			       cout<< "Wolf 359 "<<endl;
					
			      cout<< " Wolf 359 (GJ 406)1​ es el nombre por el que se conoce a la cuarta estrella más cercana a nuestro Sol después del sistema estelar Alfa Centauri, la estrella de Barnard y el sistema Luhman 16. Está situada a tan solo 7,8 años luz (2,4 pársecs) en la constelación de Leo cerca de la eclíptica, al sur de Chertan (θ Leonis). De magnitud aparente +13,54,1​ resulta totalmente invisible al ojo humano sin ayuda óptica. Fue descubierta fotográficamente en 1918 por el astrónomo alemán Max Wolf. Ha sido la primera estrella distinta del Sol en la cual se ha observado el espectro de su corona desde un telescopio terrestre.2​"<< endl;
			
			
				}
				
         if (estrellas == 4) {
				cout<< " Sirio "<<endl;
			       cout<< "Sirio, o Sirius en su denominación latina, es el nombre propio de la estrella Alfa Canis Maioris (α CMa, también Alfa Canis Majoris), la más brillante de todo el cielo nocturno vista desde la Tierra, situada en la constelación del hemisferio celeste sur Canis Maior. Esta estrella tan notable, que es en realidad una estrella binaria, es muy conocida desde la antigüedad; por ejemplo, en el Antiguo Egipto, la salida heliaca de Sirio marcaba la época de las inundaciones del Nilo,12​ y ha estado presente en civilizaciones tan dispares como la griega, la maya y la polinesia. En ocasiones, y coloquialmente, Sirio es llamada «Estrella Perro» a raíz de la constelación a la que pertenece.vLa componente primaria de las dos estrellas que conforman el sistema, Sirio A, es una estrella blanca de la secuencia principal de tipo espectral A1V que cuenta con una temperatura superficial de 10 000 K y que está alejada a unos 8,6 años luz del sistema solar, lo que la convierte en la séptima estrella más cercana respecto al Sol. Su magnitud aparente en la banda B (azul) es –1,46, y en la banda V es –1,47.1​ Friedrich Bessel, en 1844, dedujo la presencia de una compañera, un objeto celeste muy tenue ahora llamado Sirio B o «el Cachorro», que fue observado casualmente por primera vez en 1862 por el constructor de objetivos astronómicos Alvan Graham Clark. Fue una de las primeras enanas blancas en ser descubiertas, su magnitud en la banda V es 8,44, su tipo espectral es DA2 y su temperatura superficial es de unos 25 200 K.5​"<< endl;
			
			
				   }
				
	 if (estrellas == 5) {
				cout<< " Luyten 726-8 "<<endl;
				 cout<< " ."<< endl;
				
				
				 }
				
				if (estrellas == 6) {
				cout<< " Ross 154 "<<endl;
				cout<< "Ross 154 (GJ 729)1​ es actualmente la octava estrella más próxima al sistema solar a una distancia de 9,68 años luz. De magnitud aparente +10,44, no es visible a simple vista y se encuentra en la constelación de Sagitario al noreste de Kaus Borealis (λ Sagittarii).2​ Fue descubierta en 1925 por el astrónomo Frank Elmore Ross e incluida en su «Segunda lista de nuevas estrellas con movimiento propio».3​ "<< endl;
				
				
							 }

				if (estrellas == 7) {
				cout<< " Epsilon Eridani "<<endl;
			      cout<< "Ran es una estrella de la constelación de Eridanus. Está situada a unos 10,5 años luz de la Tierra, siendo una de las más próximas al sistema solar y la cuarta más próxima visible a simple vista. Es una estrella de la secuencia principal, de tipo espectral K2, muy parecida al Sol, con una masa de 0,83 masas solares, un radio de 0,895 radios solares y una luminosidad estelar de 0,28 veces la solar. Su espectro óptico es muy variable, con muchas líneas espectrales de emisión. Tiene un campo magnético muy fuerte que gira aproximadamente cada 11 días. Su período de rotación es de 12 días. La razón para todo ello es su juventud: tiene solo 600 millones de años cuando nuestro Sol tiene 4600 millones."<<endl;
			
			
				}
				
				if (estrellas == 8) {
				cout<< " Lacaille 9352 "<<endl;
			    
			      cout<< "Lacaille 9352 (GJ 887 / HIP 114046 / LHS 70)1​ es una estrella que se encuentra a 10,74 años luz del Sol, lo que la convierte en la décimo-primera (o undécima) más cercana a nuestro sistema solar. Se halla situada en la constelación de Piscis Austrinus cerca del límite con Grus, al sureste de β Piscis Austrini, y suroeste de γ Piscis Austrini y δ Piscis Austrini.2​ De magnitud aparente +7,34,1​ no es observable a simple vista.Lacaille 9352 fue una de las estrellas que incluyó Nicolas Louis de Lacaille en su catálogo del año 1763 en donde figuran 9766 estrellas observadas desde el hemisferio sur. Respecto a nosotros se mueve a razón de 6,9 por año, la cuarta estrella con mayor movimiento propio (el primero en notarlo fue Benjamin Apthorp Gould en 18813​De tipo espectral M1.5V,4​ Lacaille 9352 es una enana roja con una temperatura efectiva de 3700 K.5​ Con apenas algo más del 1 % del la luminosidad solar, su metalicidad es un 60 % de la que tiene el Sol ([Fe/H] = -0,22).6​ La medida de su diámetro angular, teniendo en cuenta el oscurecimiento de limbo —1,388 milisegundos de arco—,7​ permite calcular su radio, igual al 64 % del que tiene el Sol; otras fuentes, sin embargo, estiman un radio inferior, equivalente al 49 % del radio solar.6​ Su masa es aproximadamente la mitad de la que tiene el Sol.6​"<< endl;
			
			
				}
				
				if (estrellas == 9) {
				cout<< " Antares "<<endl;
			      cout<< "Antares es el nombre de la estrella α Scorpii (α Sco / 21 Sco), la más brillante de la constelación de Escorpio con magnitud aparente +1,09 y la decimosexta más brillante del cielo nocturno. Junto con Aldebarán (α Tauri), Espiga (α Virginis) y Regulus (α Leonis) está entre las cuatro estrellas más brillantes cerca de la eclíptica. El nombre de Antares proviene del griego anti Ares (Άντάρης) y significa «el rival de Ares» o «el opuesto a Ares» debido a su color rojizo, ya que en el cielo nocturno rivalizaba con el planeta Marte (Ἄρης, Ares en griego) que pasa muy cerca de esta estrella cada 1 año y 11 meses. Su distintivo color rojizo ha hecho de ella un objeto de interés en muchas sociedades del pasado. La situación de la estrella en el centro de la constelación de Scorpius explica su otro nombre, de origen árabe, Kalb al Akrab3​ («el corazón del escorpión»). En la astronomía egipcia representó a la diosa Serket o Selkit, anunciando la salida del Sol por sus templos en el equinoccio otoñal (3700-3500 a. C.); muchos de los templos egipcios están orientados de tal manera que la luz de Antares jugara un papel importante en las ceremonias que se llevaban a cabo. En la antigua Persia era una de las cuatro «Estrellas Reales» y, probablemente, el "<<endl;
			
			
				}
	
	if (estrellas == 10) {
	cout<< " Aldebaran "<<endl;
      cout<< "Aldebarán (Alfa Tauri / α Tau / 87 Tauri / HIP 21421)1​ es la estrella más brillante de la constelación de Tauro («El Toro») y la decimotercera más brillante del cielo nocturno. De magnitud aparente +0,85, es de color rojo anaranjado. Aunque visualmente parece ser el miembro más brillante del cúmulo abierto de la Híades, en realidad no forma parte del mismo y simplemente está en la misma línea de visión. Junto a Sirio (α Canis Majoris) y Arturo (α Bootis), permitió a Edmund Halley descubrir el movimiento propio de las estrellas mediante la comparación de sus posiciones de entonces con las que figuraban en los catálogos antiguos."<<endl;



	}
	
		
	
	if (estrellas == 11) {
	cout<< " Regulus "<<endl;
      cout<< "Regulus o Régulo (α Leonis / α Leo / 32 Leonis / GJ 9316) es el nombre de la estrella más brillante de la constelación de Leo. Es una de las cuatro «estrellas reales» mesopotámicas, junto a Aldebarán (α Tauri), Antares (α Scorpii) y Fomalhaut (α Piscis Austrini). Visualmente es de color azul y tiene una magnitud aparente de +1,35. Se encuentra casi sobre la eclíptica a sólo unos 25 minutos de arco, y hacia el 23 de agosto está al otro lado del Sol aunque el Sol no llega a ocultarla. Su declinación (latitud celeste) es de unos 12 grados positivos (+12º) respecto al ecuador celeste, lo que significa que está en el hemisferio norte celeste y que se la ve pasar por el cénit desde 12º N mientras desde 77º S se la ve en el horizonte. Alcanza su culmen a medianoche hacia el 20 de febrero. Según el movimiento de precesión que modifica las coordenadas de las estrellas, hace 44 siglos (en torno al 2.400 a.C., en tiempos del Imperio Antiguo de Egipto) los puntos solsticiales coincidían hacia la posición de Régulo, de modo que entonces su culmen a medianoche coincidía con el solsticio de invierno (en el hemisferio Norte) y su culmen a mediodía (con el Sol) con el solsticio de verano. Dentro de 22 siglos, hacia el 4.200 d.C., el punto equinoccial es el que estará muy cerca de Regulus."<<endl;


	}
	
	if (estrellas == 12) {
		cout<< " Betelgeuse "<<endl;
	      cout<< "Betelgeuse, también llamada α Orionis o HIP 27989, es una estrella brillante del tipo supergigante roja. Se halla en la constelación de Orión y es la novena estrella más brillante en el cielo. Su color característico proviene de las bajas temperaturas de su superficie (unos 3000 K). El estado evolutivo de la estrella es avanzado: ha pasado ya la etapa más importante de su vida, la secuencia principal, agotado ya el combustible en su núcleo que le proporcionaba energía (por fusión del hidrógeno), después de lo cual aumentó su tamaño hasta las enormes dimensiones actuales. Sus variaciones de luminosidad son propias de su presente como estrella gigante. La temperatura superficial de Betelgeuse es relativamente baja, pese a lo cual, al ser una estrella supergigante, su brillo es muy elevado. Aunque es la estrella α de Orión, no es la más brillante de la constelación en luz visible, ya que Rígel (β Orionis) la supera en este aspecto; pero en luz roja e infrarroja cercana, Betelgeuse sí es la más brillante" <<endl;
	
	
		}
		
		break;
	
	case 3: 
		cout<<"Ingrese la galaxia " <<endl;
		cout<<"1: Mercurio /  2: Venus /  3: La Tierra	/  4: Marte  / 5: Júpiter /  6: Saturno / 7: Urano / 8: Neptuno" <<endl;
		cout<<"ELIJA CON NUMERO" <<endl;
		cin>> planetas;

}
	

 }
else{
	cout<<"no escribio el numero correcto "<<endl;
	}
 
return 0;
}
