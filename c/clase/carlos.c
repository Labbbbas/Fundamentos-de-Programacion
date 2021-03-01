#include <stdio.h>

int main()
{
	int encuesta, eleccionsin, desayuno, almuerzo, comida, merienda, cena, x1, x2, x3, y1, y2, y3, z1, z2, z3, a1, a2, a3, b1, b2, b3, nonada;
	int eleccionvege, desayuno2, almuerzo2, comida2, merienda2, cena2, x11, x22, x33, y11, y22, y33, z11, z22, z33, a11, a22, a33, b11, b22, b33;
	int eleccionvega, desayuno3, almuerzo3, comida3, merienda3, cena3, x111, x222, x333, y111, y222, y333, z111, z222, z333, a111, a222, a333, b111, b222, b333;
	int eleccionpica, desayuno4, almuerzo4, comida4, merienda4, cena4, x1111, x2222, x3333, y1111, y2222, y3333, z1111, z2222, z3333, a1111, a2222, a3333, b1111, b2222, b3333;
	int eleccionlact, desayuno5, almuerzo5, comida5, merienda5, cena5, x11111, x22222, x33333, y11111, y22222, y33333, z11111, z22222, z33333, a11111, a22222, a33333, b11111, b22222, b33333;

	printf("--Bienvenido a 'Menu de Gusteau'--\n");
	printf("\n\n OBJETIVO\n El programa esta dirigido a todas aquellas personas que no tienen tiempo\n para llevar una alimentacion planificada y definida,");
	printf("\no que simplemente estan cansadas de comer lo mismo siempre,\n y desean descubrir nuevos platillos.\n\n");
	printf("\n");

	printf("Presione 0 + enter para empezar la encuesta\n");
	scanf("%d", &encuesta);
	printf("\n");

	switch (encuesta)
	{
	case 0:
		printf("--Preferencia por las recetas--\n");
		printf("1-Recetas vegetarianas\n");
		printf("2-Recetas veganas\n");
		printf("3-Recetas sin picante\n");
		printf("4-Recetas sin lactosa\n");
		printf("5-Ninguna preferencia\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &nonada);

		break;
	}
	printf("\n");

	switch (nonada)
	{
	case 5:
		printf("--Tiempos de alimento (sin preferencias)--\n");
		printf("51-Desayuno\n");
		printf("52-Almuerzo\n");
		printf("53-Comida\n");
		printf("54-Merienda\n");
		printf("55-Cena\n");
		printf("Ingresa la opcion que desea:");
		scanf("%d", &eleccionsin);
		break;

	case 1:
		printf("--Tiempos de alimento (vegeteriano)--\n");
		printf("11-Desayuno\n");
		printf("12-Almuerzo\n");
		printf("13-Comida\n");
		printf("14-Merienda\n");
		printf("15-Cena\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &eleccionvege);
		break;

	case 2:
		printf("--Tiempos de alimento (vegano)--\n");
		printf("21-Desayuno\n");
		printf("22-Almuerzo\n");
		printf("23-Comida\n");
		printf("24-Merienda\n");
		printf("25-Cena\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &eleccionvega);
		break;

	case 3:
		printf("--Tiempos de alimento (sin picante)--\n");
		printf("31-Desayuno\n");
		printf("32-Almuerzo\n");
		printf("33-Comida\n");
		printf("34-Merienda\n");
		printf("35-Cena\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &eleccionpica);
		break;

	case 4:
		printf("--Tiempos de alimento (sin lactosa)--\n");
		printf("41-Desayuno\n");
		printf("42-Almuerzo\n");
		printf("43-Comida\n");
		printf("44-Merienda\n");
		printf("45-Cena\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &eleccionlact);
		break;
	}
	printf("\n");
	/*sin preferencias*/
	switch (eleccionsin)
	{
	case 51:
		printf("--Opciones de desayuno--\n");
		printf("511-Tortilla de jamon\n");
		printf("512-Huevos rancheros con salsa pasilla\n");
		printf("513-Chilaquiles con salsa de habanero\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &desayuno);
		printf("\n");

		if (desayuno == 511 && desayuno != 513)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-2 huevos\n");
			printf("-1 cucharada de nata espesa\n");
			printf("-25 gr de queso Emmental o gruyere rallado grueso\n");
			printf("-25 gr jamon Iberico en trocitos\n");
			printf("-1 cucharadita aceite de oliva\n");
			printf("-Sal y pimienta al gusto\n");
			printf("-1 tomate\n");
			printf("-1 cucharadita de aceite de oliva extra virgen\n");
			printf("-Sal y pimienta al gusto\n");
			printf("-2 rebanadas de pan\n");

			printf("\n");

			printf("--Presione '5111' para imprimir receta--\n");
			scanf("%d", &x1);

			printf("\n");

			if (x1 = 5111)
			{
				printf("--La receta es--\n");
				printf("1.-Batir los huevos con la sal hasta que se pongan esponjosos.\n");
				printf("2.-Anadir la crema de leche o nata, el queso y la pimienta.\n");
				printf("3.-Seguir batiendo.\n");
				printf("4.-Calentar una sarten con el aceite.\n");
				printf("5.-Colocar la mezcla de huevo en la sarten caliente.\n");
				printf("6.-Cortar el jamon en trozos y esparcirlos sobre la mezcla.\n");
				printf("7.-Enrollar la tortilla cuando haya cuajado un poco y dejar cocinar hasta el punto deseado.\n");
				printf("8.-En un plato hondo cortar los tomates en trozos medianos.\n");
				printf("9.-Banar con el aceite de oliva y salpimentar al gusto.\n");
				printf("10.-(opcional)Agregar una pizca de oregano.\n");
				printf("11.-(opcional)Al momento de servir, tostar un poco las rebanadas de pan.\n");
				printf("12.-Colocar en cada rebanada un trozo de tortilla y cubrir con el tomate.\n");
			}
		}
		else if (desayuno == 512 && desayuno != 511)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-8 tostadas de ajonjoli pequenas\n");
			printf("-8 huevos\n");
			printf("-7 chiles pasilla\n");
			printf("-1/3 de cebolla\n");
			printf("-1 diente de ajo\n");
			printf("-1 taza de queso doble crema\n");
			printf("-1 1/2 tazas de clado de pollo\n");
			printf("-1 taza de frijoles negros refritos\n");
			printf("\n");
			printf("--Presione '5112' para imprimir receta--\n");
			scanf("%d", &x2);
			printf("\n");
			if (x2 = 5112)
			{
				printf("--La receta es--\n");
				printf("1.-Hierve los chiles con la cebolla y el ajo durante 10 minutos.\n");
				printf("2.-Después licualos con el caldo de pollo y salpimienta.\n");
				printf("3.-Prepara los huevos estrellados, sírvelos sobre las tostadas untadas con los frijoles refritos.\n");
				printf("4.-Baña con la salsa y termina con el queso doble crema.\n");
			}
		}

		else if (desayuno == 513 && desayuno != 512)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-4 tazas de totopos\n");
			printf("-1/2 pechuga de pollo cocido y deshebrado\n");
			printf("-1/2 taza de crema\n");
			printf("-1 aguacate\n");
			printf("-1 jitomate picado\n");
			printf("-4 cucharadas de cilantro picado\n");
			printf("-2 limones\n");
			printf("-2 rábanos en láminas delgadas\n");
			printf("-1/2 taza de queso desmoronado\n");
			printf("-1 chile habanero en tiras\n");
			printf("-3 chiles habaneros\n");
			printf("-2 dientes de ajo\n");
			printf("-1/4 de cebolla\n");
			printf("-3 tomates verdes\n");
			printf("-2 jitomates\n");
			printf("\n");
			printf("--Presione '5113' para imprimir receta--\n");
			scanf("%d", &x3);
			printf("\n");
			if (x3 = 5113)
			{
				printf("--La receta es--\n");
				printf("1.-Para la salsa hierve los ingredientes durante 10 minutos y licúa, rectifica el sazón.\n");
				printf("2.-En un tazón integra el aguacate con el jitomate, cilantro y jugo de limón, salpimienta.\n");
				printf("3.-Combina los totopos con la salsa, divide en cuatro platos y termina con el guacamole,\n pollo deshebrado, rábano, queso, crema y tiras de habanero.\n");
			}
		}
		break;
	case 52:
		printf("--Opciones de almuerzo--\n");
		printf("521-Crudites con hummus\n");
		printf("522-Chips vegetales de berenjena , zanahoria y pepino\n");
		printf("523-Ensalada de tomate, pepino y lechuga\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &almuerzo);
		printf("\n");

		if (almuerzo == 521 && almuerzo != 523)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-300 gr de Garbanzo cocido\n");
			printf("-1\2 diente de Ajo\n");
			printf("-1 cucharadita de Tahini o pasta de semillas de sésamo\n");
			printf("-6 unidades de Aceitunas negras\n");
			printf("-1 chorro de Aceite de oliva\n");
			printf("-1 chorro de Zumo de limón\n");
			printf("-1 pizca de Comino molido\n");
			printf("-1 pizca de Sal\n");
			printf("-1 pizca de Pimienta negra molida\n");
			printf("-1 pizca de Pimentón dulce\n");
			printf("-1 unidad de Pimiento verde\n");
			printf("-1 unidad de zanahoria\n");
			printf("-6 unidades de tomate cherry\n");
			printf("-2 unidades de apio\n");
			printf("\n");
			printf("--Presione '5221' para imprimir receta--\n");
			scanf("%d", &y1);

			printf("\n");

			if (y1 = 5221)
			{
				printf("--La receta es--\n");
				printf("1.-Lavamos bien todas las verduras. \n");
				printf("2.-Cortamos el pimiento en bastones con cuidado de no dejar las partes blancas internas o pepitas. \n");
				printf("3.-Hacemos lo mismo con el apio.\n");
				printf("4.-Pelamos la zanahoria y la cortamos por la mitad. Hacemos también bastoncitos.\n");
				printf("5.-Lavamos y cortamos los tomates cherry en cuartos.\n");
				printf("6.-Colocamos las verduras crudas en un plato de forma ordenada, dejando hueco para la salsa central.\n");
				printf("7.-Lavamos los garbanzos y los escurrimos bien. Colocamos los garbanzos en un vaso para la batidora.\n");
				printf("8.-Anadimos las aceitunas negras, el ajo, un poco de sal, pimienta negra al gusto y un poco de comino molido.\n");
				printf("9.-Antes de comenzar a batir, anadimos una cucharadita de tahini o pasta de sesamo.\n");
				printf("10.-Batimos el hummus arabe con ayuda de la batidora, anadiendo un poco de aceite de oliva y zumo de limon al gusto.\n");
			}
		}
		else if (almuerzo == 522 && almuerzo != 521)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-1 berenjena\n");
			printf("-1 calabacin\n");
			printf("-1 zanahioria\n");
			printf("-1 pepino\n");
			printf("-5 gr de aceite de oliva virgen extra\n");
			printf("-125 ml de yogur natural\n");
			printf("-1 pizca de sal\n");
			printf("-1 pizca de pimienta negra\n");
			printf("-1 chorrito de limon\n");
			printf("-1 manojo de perejil fresco\n");
			printf("\n");
			printf("--Presione '5222' para imprimir receta--\n");
			scanf("%d", &y2);

			printf("\n");

			if (y2 = 5222)
			{
				printf("--La receta es--\n");
				printf("1.-Lavar los vegetales con aghua y frotar con un cepillo las impurezas.\n");
				printf("2.-Cortar en rodajas muy finas nuestras hortalizas.\n");
				printf("3.-Colocar las hortalizas en papel de horno con un poco de sceite para que no se queden pegadas\n");
				printf("4.-Introducir las rodajas a 180ºC por 15 min (a mitad del proceso dar la vuelta)\n");
			}
		}
		else if (almuerzo == 523 && almuerzo != 522)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-4 unidades de tomates enteros\n");
			printf("-1 unidad de lechuga entera\n");
			printf("-2 unidades de Pepinos\n");
			printf("-1 pizca de Pimienta\n");
			printf("-1 pizca de Sal\n");
			printf("-100 gr de queso feta\n");
			printf("-10 unidades de Aceituna\n");
			printf("\n");
			printf("--Presione '5223' para imprimir receta--\n");
			scanf("%d", &y3);

			printf("\n");

			if (y3 = 5223)
			{
				printf("--La receta es--\n");
				printf("1.-Cortar los tomates en triángulos \n");
				printf("2.-Lavar bien la lechuga y cortar en pedazos pequenos.\n");
				printf("3.-Pelar pepino y cortar en rodajas.\n");
				printf("4.-Revolver todo y agregar sal y pimienta.\n");
				printf("5.-Anadir queso feta en taquitos y olivas. (opcional)\n");
				printf("6.-Alinar la ensalada de tomate, pepino y lechuga con un poco de aceite y vinagre o aderezo.\n");
			}
		}
		break;
	case 53:
		printf("--Opciones de comida--\n");
		printf("531-Pollo con salsa Pipian\n");
		printf("532-Mole poblano\n");
		printf("533-Cochinita pibil\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &comida);
		printf("\n");

		if (comida == 531 && comida != 533)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-1 kg de muslos de pollo o pollo entero cortado en trozos\n");
			printf("-2 cucharaditas de sal\n");
			printf("-1 cucharadita de pimienta\n");
			printf("-1/2 cucharadita de pimentón ahumado\n");
			printf("-1/2 cucharadita de comino\n");
			printf("-4 cucharadas de aceite de oliva\n");
			printf("-2 pimientos chipotle secos\n");
			printf("-1 pimiento serrano, picado\n");
			printf("-3 dientes de ajo, cortados\n");
			printf("-4 tomates Roma, sin el centro\n");
			printf("-1 cebolla blanca mediana, cortada en trozos\n");
			printf("-3 1/2 tazas de caldo de pollo\n");
			printf("-1/3 taza de cacahuates (maní) tostados\n");
			printf("-1/3 taza de pepitas tostadas\n");
			printf("-1/4 taza de semillas de sésamo tostadas\n");
			printf("\n");
			printf("--Presione '5331' para imprimir receta--\n");
			scanf("%d", &z1);

			printf("\n");

			if (z1 = 5331)
			{
				printf("--La receta es--\n");
				printf("1.-Condimenta el pollo con 1 cucharadita de sal, 1/2 cucharadita de pimienta, 1/2 cucharadita de pimentón ahumado y 1/2 cucharadita de comino y reserva.\n");
				printf("2.-En una sarten grande, precalienta las 4 cucharadas de aceite de oliva a fuego medio entre 5 y 7 minutos.\n");
				printf("3.-Agrega el pollo y cocina durante 5 minutos de cada lado.(Es posible que tengas que cocinar el pollo en dos tandas).\n");
				printf("4.-Retira de la sarten y transfiere a un plato grande.\n");
				printf("5.-Retira el aceite de la sarten, dejando solamente 2 cucharadas.\n");
				printf("6.-Reduce el fuego levemente y agrega los pimientos chipotle y cocina durante 2 minutos.\n");
				printf("7.-Agrega el pimiento serrano, el ajo, los tomates y la cebolla.\n");
				printf("8.-Cocina durante 8 minutos, mezclando de vez en cuando.\n");
				printf("9.-Agrega 2 tazas de caldo a la sarten y continua cocinando durante 5 minutos.\n");
				printf("10.-Transfiere los contenidos de la sarten a la licuadora; agrega los cacahuates, las pepitas y 1/8 taza de semillas de sesamo.\n");
				printf("11.-Tapa la licuadora y cubrela con una toalla de cocina para sostenerla firmemente.\n");
				printf("12.-Licua a velocidad alta hasta que todo quede bien unido; transfiere esta salsa a la misma sarten y cocina a fuego medio.\n");
				printf("13.-Agrega el resto del caldo y condimenta con sal y pimienta a gusto.\n");
				printf("14.-Vuelve a agregar el pollo a la sarten, tapa y cocina a fuego bajo durante 40 minutos.\n");
				printf("15.-Deja reposar durante 10 minutos.\n");
				printf("16.-Transfiere el pollo a una charola para servir, vierte la salsa por encima del pollo y decora con el resto de las semillas de sesamo.\n");
			}
		}
		else if (comida == 532 && comida != 531)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-15 chiles anchos\n");
			printf("-12 chiles mulatos y 12 chiles pasilla\n");
			printf("-6 chiles chipotles o morita\n");
			printf("-1/2  cebolla\n");
			printf("-1 cabeza de ajo\n");
			printf("-2 jitomates\n");
			printf("-1 pizca de anís\n");
			printf("-2 o 3 rajitas de canela\n");
			printf("-150 gr de uva pasa\n");
			printf("-100 gr de pepita de calabaza peladas\n");
			printf("-50 gr de almendras\n");
			printf("-100 gr de cacahuate\n");
			printf("-3 clavos (o la punta de una cucharita)\n");
			printf("-1 piloncillo\n");
			printf("-2 tortillas\n");
			printf("-1 pieza de Chocolate Abuelita\n");
			printf("-2 cucharas soperas de manteca de cerdo\n");
			printf("-1 platano macho\n");
			printf("-Piezas de guajolote o pollo\n");
			printf("-1 pza mediana de pan blanco\n");
			printf("-Semillas de cilantro\n");
			printf("-1 litro de caldo de pollo\n");
			printf("\n");
			printf("--Presione '5332' para imprimir receta--\n");
			scanf("%d", &z2);

			printf("\n");

			if (z2 = 5332)
			{
				printf("--La receta es--\n");
				printf("1.-El primer paso es limpiar todos los chiles quitándoles las semillas y los rabos. Una vez que termina esto, se tuestan en una sarten; no deben quemarse porque se amarga el mole.\n");
				printf("2.-Todos los ingredientes van a pasar por el mismo procedimiento, se ponen a cocer en agua por separado, los chiles, los jitomates, los ajos y la cebolla van juntos. \n");
				printf("2.-Por separado se ponen, una vez tostados, los demas ingredientes que son los que espesaran el mole.\n");
				printf("4.-Una vez que ya hirvio todo, se muele el chile con el tomate, el ajo y la cebolla.\n");
				printf("5.-En una cazuela de barro se pone a calentar la manteca y se agrega el piloncillo para que se vaya deshaciendo.\n");
				printf("6.-Posteriormente y pasado por colador, se agrega la salsa de jitomate con ajo y cebolla.\n");
				printf("7.-Lo mismo se hace con la espesadura y se deja sazonar muy bien a fuego medio porque salpica; se menea con cuchara de madera para que no se pegue al fondo de la olla.\n");
				printf("8.-Agregar poco a poco el caldo y la sal, debe sazonarse por al menos 45 minutos para que el chile no quede crudo y tome bien su sabor.\n");
				printf("9.-Finalmente, agregar el pollo ya cocido y se deja hervir otros 20 minutos. Debe quedar espesito, pero no seco. \n");
				printf("10.-Se tuesta ajonjoli para ponerlo encima del mole.\n");
				printf("11.-Se acompana con arroz rojo, tortillitas calientes o pan blanco.\n");
			}
		}
		else if (comida == 533 && comida != 532)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-1 kilo de pulpa de cerdo\n");
			printf("-1 litro de jugo de naranja\n");
			printf("-1/4 de cebolla\n");
			printf("-1/2 taza de vinagre de manzana\n");
			printf("-100 g de pasta de achiote\n");
			printf("-Chile habanero\n");
			printf("-1 limon (el jugo)\n");
			printf("-Sal\n");
			printf("-1 cebolla morada\n");
			printf("-4 cucharadas de aceite de oliva\n");
			printf("-1/4 de taza de vinagre\n");
			printf("-1 cucharadita de oregano\n");

			printf("\n");
			printf("--Presione '5333' para imprimir receta--\n");
			scanf("%d", &z3);

			printf("\n");

			if (z3 = 5333)
			{
				printf("--La receta es--\n");
				printf("1.-Enjuaga la carne y cortala en trozos.\n");
				printf("2.-Licua el jugo de naranja con la cebolla, el vinagre y el achiote.\n");
				printf("3.-Pon a cocer la carne con la mezcla en olla de presion por 30 minutos.\n");
				printf("4.-Mientras, corta la cebolla en julianas, salteala en aceite de oliva.\n");
				printf("5.-Ponla en un recipiente con el vinagre, un poco de sal y oregano.\n");
				printf("6.-Corta el chile habanero en rebanadas finas, ponle el jugo de limon, un poco de agua y sal al gusto. \n");
				printf("7.-Sirve los tacos con las cebollitas y una rebanada de habanero.\n");
			}
		}
		break;

	case 54:
		printf("--Opciones de merienda--\n");
		printf("541-Tostadas integrales con aguacate y pavo\n");
		printf("542-Tortitas con crema de cacahuate y platano\n");
		printf("543-Yogur con leche de almendras\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &merienda);
		printf("\n");

		if (merienda == 541 && merienda != 543)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-2 rebanadas de pan integral o de avena\n");
			printf("-4 lonchas de jamón de pavo cocido bajo en grasas\n");
			printf("-1 aguacate\n");
			printf("-1 chorrito de aceite de oliva virgen extra\n");
			printf("-3 gotas de salsa picante\n");
			printf("-1 limón\n");
			printf("-Sésamo negro\n");
			printf("-Sésamo blanco\n");
			printf("-Pimienta negra recién molida\n");
			printf("-Sal\n");
			printf("\n");
			printf("--Presione '5441' para imprimir receta--\n");
			scanf("%d", &a1);

			printf("\n");

			if (a1 = 5441)
			{
				printf("--La receta es--\n");
				printf("1.-Colocar todos los ingredientes a mano para la preparación de las tostadas.\n");
				printf("2.-Tostar los panes integrales o de avena al gusto de cada persona. \n");
				printf("3.-A continuación, dejarlo enfriar para que no se humedezcan.\n");
				printf("4.-Cortar el aguacate por la mitad, retirar la pulpa y machacarla en un bol con un tenedor hasta obtener una pasta suave y homogénea. \n");
				printf("5.-Salpimentar la pasta de aguacate y agregarle un chorrito de jugo de limón para que no se oxide.\n");
				printf("6.-Agregar las tres gotas de salsa picante y un chorrito de aceite de oliva. \n");
				printf("7.-Mezclar bien para que todos los sabores se integren.\n");
				printf("8.-Extender la pasta de aguacate de forma abundante sobre cada una de las tostadas.\n");
				printf("9.-Colocar sobre la pasta de aguacate una loncha de jamón de pavo. \n");
				printf("10.-Espolvorear con una pizca de sésamo blanco y negro. \n");
			}
		}
		else if (merienda == 542 && merienda != 541)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-50 gr de mantequilla\n");
			printf("-2 huevos\n");
			printf("-200 ml de leche\n");
			printf("-1 cucharadita de sal\n");
			printf("-150 gr de harina de trigo\n");
			printf("-2 cucharadas de azucar\n");
			printf("-1 pizca de levadura\n");
			printf("-1 cucharada de crema de cacahuate\n");
			printf("\n");
			printf("--Presione '5442' para imprimir receta--\n");
			scanf("%d", &a2);

			printf("\n");

			if (a2 = 5442)
			{
				printf("--La receta es--\n");
				printf("1.-En un recipiente junta los huevos, la mantequilla a temperatura ambiente, la harina, la leche, la sal, el azucar y la pizca de levadura.\n");
				printf("2.-Batelos durante varios minutos hasta que veas que se ha formado una masa sin grumos.\n");
				printf("3.-Unta con un poquito de mantequilla una sarten pequena que tengas, cuando se caliente echas un poco de la masa y dejas que se esparza para que se extienda por toda la sarten y adquiera su forma redonda.\n");
				printf("4.-Cuando veas que la masa se ha hecho por un lado (veras que empiezan a salir burbujitas por la superficie) dale la vuelta con la espatula y dejas que se cocine por el otro.\n");
				printf("5.-Unta las tortitas con un poquito de crema de cacahuete.\n");
			}
		}
		else if (merienda == 543 && merienda != 542)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-1 taza de almendras\n");
			printf("-3 tazas de agua mineral\n");
			printf("-1 cucharadita de miel\n");
			printf("-1 litro de leche de almendras\n");
			printf("-1 sobre de probióticos\n");
			printf("-Azúcar o edulcorante\n");
			printf("-Fruta fresca picada, chispas de chocolate, cereal, frutos secos picados\n");
			printf("\n");
			printf("--Presione '5443' para imprimir receta--\n");
			scanf("%d", &a3);

			printf("\n");

			if (a3 = 5443)
			{
				printf("--La receta es--\n");
				printf("1.-Para obtener la leche, colocar en la licuadora las almendras, con el agua y la miel.\n");
				printf("2.-Licuar durante 10 minutos. Colar la leche con ayuda de un colador fino. Con la leche de almendras obtenida hacemos el yogur.\n");
				printf("3.-Colocamos la leche en un recipiente apto para horno. Le incorporamos el sobrecito de probioticos y removemos.\n");
				printf("4.-Llevamos el recipiente a horno muy bajo durante horas. Apagamos el fuego y dejamos el recipiente dentro hasta que se enfrie.\n");
				printf("5.-Retiramos y colamos el yogur directamente en otro recipiente limpio con tapa. Lo llevamos al refrigerador durante dos horas.\n");
				printf("6.-Pasado ese tiempo, lo endulzamos con azucar o edulcorante.\n");
				printf("7.-Servir con fruta fresca, chocolate, miel o cereales\n");
			}
		}
		break;

	case 55:
		printf("--Opciones de cena--\n");
		printf("551-Cena 1\n");
		printf("552-Cena 2\n");
		printf("553-Cena 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &cena);
		printf("\n");

		if (cena == 551 && cena != 553)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena 1\n");
			printf("\n");
			printf("--Presione '5551' para imprimir receta--\n");
			scanf("%d", &b1);

			printf("\n");

			if (b1 = 5551)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena 1\n");
			}
		}
		else if (cena == 552 && cena != 551)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena 2\n");
			printf("\n");
			printf("--Presione '5552' para imprimir receta--\n");
			scanf("%d", &b2);

			printf("\n");

			if (b2 = 5552)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena 2\n");
			}
		}
		else if (cena == 553 && cena != 552)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena 3\n");
			printf("\n");
			printf("--Presione '5553' para imprimir receta--\n");
			scanf("%d", &b3);

			printf("\n");

			if (b3 = 5553)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena 3\n");
			}
		}
		break;
	}
	/*vegetarianos*/
	switch (eleccionvege)
	{
	case 11:
		printf("--Opciones de desayuno--\n");
		printf("111-Desayuno vege 1\n");
		printf("112-Desayuno vege 2\n");
		printf("113-Desayuno vege 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &desayuno2);

		printf("\n");

		if (desayuno2 == 111 && desayuno2 != 113)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno vege 1\n");

			printf("\n");

			printf("--Presione '1111' para imprimir receta--\n");
			scanf("%d", &x11);

			printf("\n");

			if (x11 = 1111)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno vege 1\n");
			}
		}
		else if (desayuno2 == 112 && desayuno2 != 111)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno vege 2\n");

			printf("\n");
			printf("--Presione '1112' para imprimir receta--\n");
			scanf("%d", &x22);
			printf("\n");
			if (x22 = 1112)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno vege 2\n");
			}
		}
		else if (desayuno2 == 113 && desayuno2 != 112)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno vege 3\n");

			printf("\n");
			printf("--Presione '1113' para imprimir receta--\n");
			scanf("%d", &x33);
			printf("\n");
			if (x33 = 1113)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno vege 3\n");
			}
		}
		break;
	case 12:
		printf("--Opciones de almuerzo--\n");
		printf("121-Almuerzo vege 1\n");
		printf("122-Almuerzo vege 2\n");
		printf("123-Almuerzo vege 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &almuerzo2);
		printf("\n");

		if (almuerzo2 == 121 && almuerzo2 != 123)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo vege 1\n");

			printf("\n");
			printf("--Presione '1221' para imprimir receta--\n");
			scanf("%d", &y11);

			printf("\n");

			if (y11 = 1221)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo vege 1\n");
			}
		}
		else if (almuerzo2 == 122 && almuerzo2 != 121)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo vege 2\n");

			printf("\n");
			printf("--Presione '1222' para imprimir receta--\n");
			scanf("%d", &y22);

			printf("\n");

			if (y22 = 1222)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo vege 2\n");
			}
		}
		else if (almuerzo2 == 123 && almuerzo2 != 122)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo vege 3\n");

			printf("\n");
			printf("--Presione '1223' para imprimir receta--\n");
			scanf("%d", &y33);

			printf("\n");

			if (y33 = 1223)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo 3\n");
			}
		}
		break;
	case 13:
		printf("--Opciones de comida--\n");
		printf("131-Comida vege 1\n");
		printf("132-Comida vege 2\n");
		printf("133-Comida vege 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &comida2);
		printf("\n");

		if (comida2 == 131 && comida2 != 133)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida vege 1\n");

			printf("\n");
			printf("--Presione '1331' para imprimir receta--\n");
			scanf("%d", &z11);

			printf("\n");

			if (z11 = 1331)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta comida vege 1\n");
			}
		}
		else if (comida2 == 132 && comida2 != 131)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida vege 2\n");

			printf("\n");
			printf("--Presione '1332' para imprimir receta--\n");
			scanf("%d", &z22);

			printf("\n");

			if (z22 = 1332)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de comida vege 2\n");
			}
		}
		else if (comida2 == 133 && comida2 != 132)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida vege 3\n");

			printf("\n");
			printf("--Presione '1333' para imprimir receta--\n");
			scanf("%d", &z33);

			printf("\n");

			if (z33 = 1333)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de comida vege 3\n");
			}
		}
		break;

	case 14:
		printf("--Opciones de merienda--\n");
		printf("141-Merienda vege 1\n");
		printf("142-Merienda vege 2\n");
		printf("143-Merienda vege 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &merienda2);
		printf("\n");

		if (merienda2 == 141 && merienda2 != 143)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda vege 1\n");

			printf("\n");
			printf("--Presione '1441' para imprimir receta--\n");
			scanf("%d", &a11);

			printf("\n");

			if (a11 = 1441)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda vege 1\n");
			}
		}
		else if (merienda2 == 142 && merienda2 != 141)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda vege 2\n");
			printf("\n");
			printf("--Presione '1442' para imprimir receta--\n");
			scanf("%d", &a22);

			printf("\n");

			if (a22 = 1442)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda vege 2\n");
			}
		}
		else if (merienda2 == 143 && merienda2 != 142)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda vege 3\n");

			printf("\n");
			printf("--Presione '1443' para imprimir receta--\n");
			scanf("%d", &a33);

			printf("\n");

			if (a33 = 1443)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda vege 3\n");
			}
		}
		break;

	case 15:
		printf("--Opciones de cena--\n");
		printf("151-Cena vege 1\n");
		printf("152-Cena vege 2\n");
		printf("153-Cena vege 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &cena2);
		printf("\n");

		if (cena2 == 151 && cena2 != 153)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena vege 1\n");
			printf("\n");
			printf("--Presione '1551' para imprimir receta--\n");
			scanf("%d", &b11);

			printf("\n");

			if (b11 = 1551)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena vege 1\n");
			}
		}
		else if (cena2 == 152 && cena2 != 151)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena vege 2\n");
			printf("\n");
			printf("--Presione '1552' para imprimir receta--\n");
			scanf("%d", &b22);

			printf("\n");

			if (b22 = 15)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena vege 2\n");
			}
		}
		else if (cena2 == 153 && cena2 != 152)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena vege 3\n");
			printf("\n");
			printf("--Presione '1553' para imprimir receta--\n");
			scanf("%d", &b33);

			printf("\n");

			if (b33 = 1553)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena vege 3\n");
			}
		}
		break;
	}
	/*vegano*/
	switch (eleccionvega)
	{
	case 21:
		printf("--Opciones de desayuno--\n");
		printf("211-Desayuno vega 1\n");
		printf("212-Desayuno vega 2\n");
		printf("213-Desayuno vega 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &desayuno3);

		printf("\n");

		if (desayuno3 == 211 && desayuno3 != 213)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno vega 1\n");

			printf("\n");

			printf("--Presione '2111' para imprimir receta--\n");
			scanf("%d", &x111);

			printf("\n");

			if (x111 = 2111)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno vega 1\n");
			}
		}
		else if (desayuno3 == 212 && desayuno3 != 211)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno vega 2\n");

			printf("\n");
			printf("--Presione '2112' para imprimir receta--\n");
			scanf("%d", &x222);
			printf("\n");
			if (x222 = 2112)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno vega 2\n");
			}
		}
		else if (desayuno3 == 213 && desayuno3 != 212)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno vega 3\n");

			printf("\n");
			printf("--Presione '2113' para imprimir receta--\n");
			scanf("%d", &x333);
			printf("\n");
			if (x333 = 2113)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno vega 3\n");
			}
		}
		break;
	case 22:
		printf("--Opciones de almuerzo--\n");
		printf("221-Almuerzo vega 1\n");
		printf("222-Almuerzo vega 2\n");
		printf("223-Almuerzo vega 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &almuerzo3);
		printf("\n");

		if (almuerzo3 == 221 && almuerzo3 != 223)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo vega 1\n");

			printf("\n");
			printf("--Presione '2221' para imprimir receta--\n");
			scanf("%d", &y111);

			printf("\n");

			if (y111 = 2221)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo vega 1\n");
			}
		}
		else if (almuerzo3 == 222 && almuerzo3 != 221)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo vega 2\n");

			printf("\n");
			printf("--Presione '2222' para imprimir receta--\n");
			scanf("%d", &y222);

			printf("\n");

			if (y222 = 2222)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo vega 2\n");
			}
		}
		else if (almuerzo3 == 223 && almuerzo3 != 222)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo vega 3\n");

			printf("\n");
			printf("--Presione '2223' para imprimir receta--\n");
			scanf("%d", &y333);

			printf("\n");

			if (y333 = 2223)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo vega 3\n");
			}
		}
		break;
	case 23:
		printf("--Opciones de comida--\n");
		printf("231-Comida vega 1\n");
		printf("232-Comida vega 2\n");
		printf("233-Comida vega 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &comida3);
		printf("\n");

		if (comida3 == 231 && comida3 != 233)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida vega 1\n");

			printf("\n");
			printf("--Presione '2331' para imprimir receta--\n");
			scanf("%d", &z111);

			printf("\n");

			if (z111 = 2331)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta comida vega 1\n");
			}
		}
		else if (comida3 == 232 && comida3 != 231)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida vega 2\n");

			printf("\n");
			printf("--Presione '2332' para imprimir receta--\n");
			scanf("%d", &z222);

			printf("\n");

			if (z222 = 2332)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de comida vega 2\n");
			}
		}
		else if (comida3 == 233 && comida3 != 232)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida vega 3\n");

			printf("\n");
			printf("--Presione '2333' para imprimir receta--\n");
			scanf("%d", &z333);

			printf("\n");

			if (z333 = 2333)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de comida vega 3\n");
			}
		}
		break;

	case 24:
		printf("--Opciones de merienda--\n");
		printf("241-Merienda vega 1\n");
		printf("242-Merienda vega 2\n");
		printf("243-Merienda vega 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &merienda3);
		printf("\n");

		if (merienda3 == 241 && merienda3 != 243)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda vega 1\n");

			printf("\n");
			printf("--Presione '2441' para imprimir receta--\n");
			scanf("%d", &a111);

			printf("\n");

			if (a111 = 2441)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda vega 1\n");
			}
		}
		else if (merienda3 == 242 && merienda3 != 241)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda vega 2\n");
			printf("\n");
			printf("--Presione '2442' para imprimir receta--\n");
			scanf("%d", &a222);

			printf("\n");

			if (a222 = 2442)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda vega 2\n");
			}
		}
		else if (merienda3 == 243 && merienda3 != 242)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda vega 3\n");

			printf("\n");
			printf("--Presione '2443' para imprimir receta--\n");
			scanf("%d", &a333);

			printf("\n");

			if (a333 = 2443)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda vega 3\n");
			}
		}
		break;

	case 25:
		printf("--Opciones de cena--\n");
		printf("251-Cena vega 1\n");
		printf("252-Cena vega 2\n");
		printf("253-Cena vega 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &cena3);
		printf("\n");

		if (cena3 == 251 && cena3 != 253)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena vega 1\n");
			printf("\n");
			printf("--Presione '2551' para imprimir receta--\n");
			scanf("%d", &b111);

			printf("\n");

			if (b111 = 2551)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena vega 1\n");
			}
		}
		else if (cena3 == 252 && cena3 != 251)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena vega 2\n");
			printf("\n");
			printf("--Presione '2552' para imprimir receta--\n");
			scanf("%d", &b222);

			printf("\n");

			if (b222 = 2552)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena vega 2\n");
			}
		}
		else if (cena3 == 253 && cena3 != 252)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena vega 3\n");
			printf("\n");
			printf("--Presione '2553' para imprimir receta--\n");
			scanf("%d", &b333);

			printf("\n");

			if (b333 = 2553)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena vega 3\n");
			}
		}
		break;
	}
	/*sin picante*/
	switch (eleccionpica)
	{
	case 31:
		printf("--Opciones de desayuno--\n");
		printf("311-Desayuno sin picante 1\n");
		printf("312-Desayuno sin picante 2\n");
		printf("313-Desayuno sin picante 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &desayuno4);

		printf("\n");

		if (desayuno4 == 311 && desayuno4 != 313)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno sin picante 1\n");

			printf("\n");

			printf("--Presione '3111' para imprimir receta--\n");
			scanf("%d", &x1111);

			printf("\n");

			if (x1111 = 3111)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno sin picante 1\n");
			}
		}
		else if (desayuno4 == 312 && desayuno4 != 311)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno sin picante 2\n");

			printf("\n");
			printf("--Presione '3112' para imprimir receta--\n");
			scanf("%d", &x2222);
			printf("\n");
			if (x2222 = 3112)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno sin picante 2\n");
			}
		}
		else if (desayuno4 == 313 && desayuno4 != 312)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno sin picante 3\n");

			printf("\n");
			printf("--Presione '3113' para imprimir receta--\n");
			scanf("%d", &x3333);
			printf("\n");
			if (x3333 = 3113)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno sin picante 3\n");
			}
		}
		break;
	case 32:
		printf("--Opciones de almuerzo--\n");
		printf("321-Almuerzo sin picante 1\n");
		printf("322-Almuerzo sin picante 2\n");
		printf("323-Almuerzo sin picante 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &almuerzo4);
		printf("\n");

		if (almuerzo4 == 321 && almuerzo4 != 323)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo sin picante 1\n");

			printf("\n");
			printf("--Presione '3221' para imprimir receta--\n");
			scanf("%d", &y1111);

			printf("\n");

			if (y1111 = 3221)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo sin picante 1\n");
			}
		}
		else if (almuerzo4 == 322 && almuerzo4 != 321)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo sin picante 2\n");

			printf("\n");
			printf("--Presione '3222' para imprimir receta--\n");
			scanf("%d", &y2222);

			printf("\n");

			if (y2222 = 3222)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo sin picante 2\n");
			}
		}
		else if (almuerzo4 == 323 && almuerzo4 != 322)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo sin picante 3\n");

			printf("\n");
			printf("--Presione '3223' para imprimir receta--\n");
			scanf("%d", &y3333);

			printf("\n");

			if (y3333 = 3223)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo sin picante 3\n");
			}
		}
		break;
	case 33:
		printf("--Opciones de comida--\n");
		printf("331-Comida sin picante 1\n");
		printf("332-Comida sin picante 2\n");
		printf("333-Comida sin picante 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &comida4);
		printf("\n");

		if (comida4 == 331 && comida4 != 333)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida sin picante 1\n");

			printf("\n");
			printf("--Presione '3331' para imprimir receta--\n");
			scanf("%d", &z1111);

			printf("\n");

			if (z1111 = 3331)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta comida sin picante 1\n");
			}
		}
		else if (comida4 == 332 && comida4 != 331)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida sin picante 2\n");

			printf("\n");
			printf("--Presione '3332' para imprimir receta--\n");
			scanf("%d", &z2222);

			printf("\n");

			if (z2222 = 3332)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de comida sin picante 2\n");
			}
		}
		else if (comida4 == 333 && comida4 != 332)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida sin picante 3\n");

			printf("\n");
			printf("--Presione '3333' para imprimir receta--\n");
			scanf("%d", &z3333);

			printf("\n");

			if (z3333 = 3333)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de comida sin picante 3\n");
			}
		}
		break;

	case 34:
		printf("--Opciones de merienda--\n");
		printf("341-Merienda sin picante 1\n");
		printf("342-Merienda sin picante 2\n");
		printf("343-Merienda sin picante 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &merienda4);
		printf("\n");

		if (merienda4 == 341 && merienda4 != 343)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda sin picante 1\n");

			printf("\n");
			printf("--Presione '3441' para imprimir receta--\n");
			scanf("%d", &a1111);

			printf("\n");

			if (a1111 = 3441)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda sin picante 1\n");
			}
		}
		else if (merienda4 == 342 && merienda4 != 341)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda sin picante 2\n");
			printf("\n");
			printf("--Presione '3442' para imprimir receta--\n");
			scanf("%d", &a2222);

			printf("\n");

			if (a2222 = 3442)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda sin picante 2\n");
			}
		}
		else if (merienda4 == 343 && merienda4 != 342)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda sin picante 3\n");

			printf("\n");
			printf("--Presione '3443' para imprimir receta--\n");
			scanf("%d", &a3333);

			printf("\n");

			if (a3333 = 3443)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda sin picante 3\n");
			}
		}
		break;

	case 35:
		printf("--Opciones de cena--\n");
		printf("351-Cena sin picante 1\n");
		printf("352-Cena sin picante 2\n");
		printf("353-Cena sin picante 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &cena4);
		printf("\n");

		if (cena4 == 351 && cena4 != 353)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena sin picante 1\n");
			printf("\n");
			printf("--Presione '3551' para imprimir receta--\n");
			scanf("%d", &b1111);

			printf("\n");

			if (b1111 = 3551)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena sin picante 1\n");
			}
		}
		else if (cena4 == 352 && cena4 != 351)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena sin picante 2\n");
			printf("\n");
			printf("--Presione '3552' para imprimir receta--\n");
			scanf("%d", &b2222);

			printf("\n");

			if (b2222 = 3552)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena sin picante 2\n");
			}
		}
		else if (cena4 == 353 && cena4 != 352)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena sin picante 3\n");
			printf("\n");
			printf("--Presione '3553' para imprimir receta--\n");
			scanf("%d", &b3333);

			printf("\n");

			if (b3333 = 3553)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena sin picante 3\n");
			}
		}
		break;
	}
	/*sin lactosa*/
	switch (eleccionlact)
	{
	case 41:
		printf("--Opciones de desayuno--\n");
		printf("411-Desayuno sin lactosa 1\n");
		printf("412-Desayuno sin lactosa 2\n");
		printf("413-Desayuno sin lactosa 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &desayuno5);

		printf("\n");

		if (desayuno5 == 411 && desayuno5 != 413)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno sin lactosa 1\n");

			printf("\n");

			printf("--Presione '4111' para imprimir receta--\n");
			scanf("%d", &x11111);

			printf("\n");

			if (x11111 = 4111)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno sin lactosa 1\n");
			}
		}
		else if (desayuno5 == 412 && desayuno5 != 411)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno sin lactosa 2\n");

			printf("\n");
			printf("--Presione '4112' para imprimir receta--\n");
			scanf("%d", &x22222);
			printf("\n");
			if (x22222 = 4112)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno sin lactosa 2\n");
			}
		}
		else if (desayuno5 == 413 && desayuno5 != 412)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de desayuno sin lactosa 3\n");

			printf("\n");
			printf("--Presione '4113' para imprimir receta--\n");
			scanf("%d", &x33333);
			printf("\n");
			if (x33333 = 4113)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta desayuno sin lactosa 3\n");
			}
		}
		break;
	case 42:
		printf("--Opciones de almuerzo--\n");
		printf("421-Almuerzo sin lactosa 1\n");
		printf("422-Almuerzo sin lactosa 2\n");
		printf("423-Almuerzo sin lactosa 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &almuerzo5);
		printf("\n");

		if (almuerzo5 == 421 && almuerzo5 != 423)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo sin lactosa 1\n");

			printf("\n");
			printf("--Presione '4221' para imprimir receta--\n");
			scanf("%d", &y11111);

			printf("\n");

			if (y11111 = 4221)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo sin lactosa 1\n");
			}
		}
		else if (almuerzo5 == 422 && almuerzo5 != 421)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo sin lactosa 2\n");

			printf("\n");
			printf("--Presione '4222' para imprimir receta--\n");
			scanf("%d", &y22222);

			printf("\n");

			if (y22222 = 4222)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo sin lactosa 2\n");
			}
		}
		else if (almuerzo5 == 423 && almuerzo5 != 422)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de almuerzo sin lactosa 3\n");

			printf("\n");
			printf("--Presione '4223' para imprimir receta--\n");
			scanf("%d", &y33333);

			printf("\n");

			if (y33333 = 4223)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta almuerzo sin lactosa 3\n");
			}
		}
		break;
	case 43:
		printf("--Opciones de comida--\n");
		printf("431-Comida sin lactosa 1\n");
		printf("432-Comida sin lactosa 2\n");
		printf("433-Comida sin lactosa 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &comida5);
		printf("\n");

		if (comida5 == 431 && comida5 != 433)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida sin lactosa 1\n");

			printf("\n");
			printf("--Presione '4331' para imprimir receta--\n");
			scanf("%d", &z11111);

			printf("\n");

			if (z11111 = 4331)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta comida sin lactosa 1\n");
			}
		}
		else if (comida5 == 432 && comida5 != 431)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida sin lactosa 2\n");

			printf("\n");
			printf("--Presione '4332' para imprimir receta--\n");
			scanf("%d", &z22222);

			printf("\n");

			if (z22222 = 4332)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de comida sin lactosa 2\n");
			}
		}
		else if (comida5 == 433 && comida5 != 432)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de comida sin lactosa 3\n");

			printf("\n");
			printf("--Presione '4333' para imprimir receta--\n");
			scanf("%d", &z33333);

			printf("\n");

			if (z33333 = 4333)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de comida sin lactosa 3\n");
			}
		}
		break;

	case 44:
		printf("--Opciones de merienda--\n");
		printf("441-Merienda sin lactosa 1\n");
		printf("442-Merienda sin lactosa 2\n");
		printf("443-Merienda sin lactosa 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &merienda5);
		printf("\n");

		if (merienda5 == 441 && merienda5 != 443)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda sin lactosa 1\n");

			printf("\n");
			printf("--Presione '4441' para imprimir receta--\n");
			scanf("%d", &a11111);

			printf("\n");

			if (a11111 = 4441)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda sin lactosa 1\n");
			}
		}
		else if (merienda5 == 442 && merienda5 != 441)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda sin lactosa 2\n");
			printf("\n");
			printf("--Presione '4442' para imprimir receta--\n");
			scanf("%d", &a22222);

			printf("\n");

			if (a22222 = 4442)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda sin lactosa 2\n");
			}
		}
		else if (merienda5 == 443 && merienda5 != 442)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("-Ingredientes de merienda sin lactosa 3\n");

			printf("\n");
			printf("--Presione '4443' para imprimir receta--\n");
			scanf("%d", &a33333);

			printf("\n");

			if (a33333 = 4443)
			{
				printf("--La receta es--\n");
				printf("Pasos de la receta de merienda sin lactosa 3\n");
			}
		}
		break;

	case 45:
		printf("--Opciones de cena--\n");
		printf("451-Cena sin lactosa 1\n");
		printf("452-Cena sin lactosa 2\n");
		printf("453-Cena sin lactosa 3\n");
		printf("Ingresa la opcion que desea: ");
		scanf("%d", &cena5);
		printf("\n");

		if (cena5 == 451 && cena5 != 453)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena sin lactosa 1\n");
			printf("\n");
			printf("--Presione '4551' para imprimir receta--\n");
			scanf("%d", &b11111);

			printf("\n");

			if (b11111 = 4551)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena sin lactosa 1\n");
			}
		}
		else if (cena5 == 452 && cena5 != 451)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena sin lactosa 2\n");
			printf("\n");
			printf("--Presione '4552' para imprimir receta--\n");
			scanf("%d", &b22222);

			printf("\n");

			if (b22222 = 4552)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena sin lactosa 2\n");
			}
		}
		else if (cena5 == 453 && cena5 != 452)
		{
			printf("--Se requieren los siguientes ingredientes--\n");
			printf("Ingredientes de cena sin lactosa 3\n");
			printf("\n");
			printf("--Presione '4553' para imprimir receta--\n");
			scanf("%d", &b33333);

			printf("\n");

			if (b33333 = 4553)
			{
				printf("--La receta es--\n");
				printf("puntos de receta de cena sin lactosa 3\n");
			}
		}
		break;
	}
}