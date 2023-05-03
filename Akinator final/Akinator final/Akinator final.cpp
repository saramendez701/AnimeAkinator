#include <iostream>
#include <string>
using namespace std;
int main()
{
	//Utilice un array para almacenar el numero estimado de personajes
	string personaje[71] = { "Denji", "Makima", "Pochita", "Aki", "Power", "Kobeni","Satoru","Megumi", "Nobara", "Yuji","Toge","Panda","Maki","Mei", "Aoi","Kento","Suguro","Sukuma","Mahito","Eren","Armin","Hange","Mikasa","Levi","Zeke", "Annie", "Erwin","Reiner","Falco","Ryuk","L","Light","Misa","Near","Mello","Mastuda", "Rem","Inuyasha","Kagome","Sesshumaru","Kikyo","Koga","Miroku","Sango","Shippo","Myoga","Naraku","Tomioka","Mitsuri","Uzui","Shinobu","Tokito","Rengoku","Nezuko","Tanjiro","Zenitsu","Kanao","Inosuke","Muzan","Akana","Goku","Vegeta","Bulma","Piccoro","Krillin","Androide 18","Gohan","Freezer","Trunks","Mr.Satan", "Videl" };
	cout << "Bienvenido al adivinador de personajes de anime" << endl;
	cout << "Piensa en un personaje del siguiente listado de animes: " << endl;
	cout << "Kimetsu no yaiba " << endl;
	cout << "Death note" << endl;
	cout << "Jujutsu Kaisen" << endl;
	cout << "Dragon Ball" << endl;
	cout << "Chainsaw Man" << endl;
	cout << "Inuyasha" << endl;
	bool adivinado = false;
	string respuesta, regreso;
	bool mujer = false;
	bool armas = false;
	bool pelinegra = false;
	bool inuyasha = false;
	bool kagome = false;
	bool hombre = false;
	bool kikyo = false;
	bool magia = false;
	bool no_pelinegra = false;
	bool AOT = false;
	bool mikasa = false;
	bool hange = false;
	bool Annie = false;
	bool chainsaw_man = false;
	bool Makima = false;
	bool Kimetsu = false;
	bool Nezuko = false;
	bool death_note = false;
	bool Rem = false;
	bool Misa = false;
	bool dragon_ball = false;
	bool Bulma = false;
	bool androide_18 = false;
	bool Videl = false;
	bool Power = false;
	bool Nobara = false;
	bool Mai = false;
	bool Kobeni = false;
	bool Maki = false;
	bool Mitsuri = false;
	bool Sango = false;
	bool Kanao = false;
	bool Shinobu = false;
	bool jujutsu = false;
	//Seccion de preguntas

	//Pregunta 1
	cout << "¿Tu personaje es hombre o mujer? (h/m): ";
	cin >> respuesta;

	if (respuesta == "m") {
		mujer = true;
		//Pregunta 2
		cout << "Su personaje utiliza armas? (Si/ No): " << endl;
		cin >> respuesta;
		if (respuesta == "Si") {
			armas = true;
		}
		if (respuesta == "No") {
			armas = false;

			//Pregunta 3
			cout << "Utiliza magia? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				magia = true;
			}
			else if (respuesta == "No") {
				magia = false;


			}
		}

		//Pregunta 4
		cout << "Tiene cabello negro? " << endl;
		cin >> respuesta;
		if (respuesta == "Si") {
			pelinegra = true;
			if (respuesta == "No") {
				pelinegra = false;
			}
			//Pregunta 5
			cout << "Es de la serie AOT? (Si/ No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				AOT = true;
				cout << "Es Mikasa? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					mikasa = true;
					cout << "He adivinado el personaje" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					mikasa = false;
					cout << "Oh no, intentemos de nuevo" << endl;
					system("pause");
					system("cls");
					return main();
				}

			}
			else if (respuesta == "No") {
				AOT = false;

			}

		}
		if (respuesta == "No") {
			no_pelinegra = true;
			//Pregunta
			cout << "Es Annie de AOT? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				Annie = true;
				cout << "He adivinado el personaje!!" << endl;
				system("pause");
				system("cls");
				return main();
			}
			if (respuesta == "No") {
				Annie = false;

			}

		}


		cout << "Mi adivinanza es...." << endl;
		//Primera sub-division
		if (mujer && armas && pelinegra) {
			//Pregunta
			cout << "Estas pensando en un personaje de Inuyasha? (Si/No) " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				inuyasha = true;

				if (respuesta == "No") {
					inuyasha = false;
				}
				//Pregunta
				cout << "Estas pensando en Kagome? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					kagome = true;
					cout << "He adivinado el personaje" << endl;
					system("pause");
					system("cls");
					return main();
				}

				if (respuesta == "No") {
					kagome = false;
					//Pregunta
					cout << "Estas pensando en Kikyo? (Si/No): " << endl;
					cin >> respuesta;
					if (respuesta == "Si") {
						kikyo = true;
						cout << "He adivinado el personaje" << endl;
						system("pause");
						system("cls");
						return main();

					}
					else if (respuesta == "No") {
						kikyo = false;
					}

				}
				cout << "Estas pensando en Sango? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Sango = true;
					cout << "He adivinado el personaje ^^" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Sango = false;
				}
			}

			cout << "Estas pensando en un personaje de Kimetsu no Yaiba? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				Kimetsu = true;
				if (respuesta == "No") {
					Kimetsu = false;
				}
				//Pregunta
				cout << "Estas pensando en Kanao? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Kanao = true;
					cout << "He adivinado tu personaje ^^" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Kanao = false;
				}
				cout << "Estas pensando en Shinobu? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Shinobu = true;
					cout << "He adivinado tu personaje ^^" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Shinobu = false;
				}
			}
		}
		//Segunda Subdivision
		if (mujer && magia) {
			//Pregunta
			cout << "Estas pensando en un personaje de Chainsaw Man? (Si/No) " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				chainsaw_man = true;
				if (respuesta == "No") {
					chainsaw_man = false;
				}
				//Pregunta
				cout << "Estas pensando en Makima? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Makima = true;
					cout << "He adivinado el personaje" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Makima = false;
				}

			}
			//Pregunta
			cout << "Estas pensando en un personaje Kimetsu no Yaiba? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				Kimetsu = true;
				if (respuesta == "No") {
					Kimetsu = false;
				}
				//Pregunta
				cout << "Estas pensando en Nezuko? (Si/ No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Nezuko = true;
					cout << "He adivinado tu personaje" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Nezuko = false;
				}
			}
			//Pregunta
			cout << "Estas pensando en un personaje de Death Note? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				death_note = true;
				if (respuesta == "No") {
					death_note = false;
				}
				//Pregunta
				cout << "Estas pensando en el Shinigami Rem? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Rem = true;
					cout << "He adivinado tu personaje" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Rem = false;
				}
			}
			cout << "Estas pensando en un personaje de Dragon Ball? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				dragon_ball = true;
				if (respuesta == "No") {
					dragon_ball = false;
				}
				//Pregunta
				cout << "Estas pensando en Videl? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Videl = true;
					cout << "He adivinado tu personaje!!" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Videl = false;
				}
			}

		}
		//Tercera Sub-division
		if (mujer) {
			//Pregunta
			cout << "Estas pensando en un personaje de Death Note? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				death_note = true;
				if (respuesta == "No") {
					death_note = false;
				}
				//Pregunta
				cout << "Estas pensando en  Misa? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Misa = true;
					cout << "He adivinado tu personaje" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Misa = false;
				}
			}
			//Pregunta
			cout << "Estas pensando en un personaje de Dragon Ball? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				dragon_ball = true;
				if (respuesta == "No") {
					dragon_ball = false;
				}
				//Pregunta
				cout << "Estas pensando en la gran cientifica genio (Bulma)? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Bulma = true;
					cout << "He adivinado tu personaje" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Bulma = false;
				}
				cout << "Estas pensando en Androide numero 18? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					androide_18 = true;
					cout << "He adivinado tu personaje" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					androide_18 = false;
				}
			}
		}
		//Cuarta Sub- division
		if (mujer && armas && magia) {
			//Pregunta
			cout << "Estas pensando en un personaje de Chainsaw Man? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				chainsaw_man = true;
				if (respuesta == "No") {
					chainsaw_man = false;
				}
				//Pregunta
				cout << "Estas pensando en la duena de Nyako (Power)? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Power = true;
					cout << "He adivinado tu personaje 707" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Power = false;
				}
			}
			cout << "Estas pensando en un personaje de Jujutsu Kaisen? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				jujutsu = true;
				if (respuesta == "No") {
					jujutsu = false;
				}
				cout << "Estas pensando en Nobara? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Nobara = true;
					cout << "He adivinado tu personaje ;)" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Nobara = false;
				}
			}
			cout << "Estas pensando en Mai? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				Mai = true;
				cout << "He adivinado tu personaje ^^" << endl;
				system("pause");
				system("cls");
				return main();
			}
			else if (respuesta == "No") {
				Mai = false;
			}

		}
		//Quinta sub-division
		if (mujer && armas) {
			//Pregunta
			cout << "Estas pensando en un personaje de Chainsaw Man? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				chainsaw_man = true;
				if (respuesta == "No") {
					chainsaw_man = false;
				}
				//Pregunta
				cout << "Estas pensando en Kobeni? (Si/ No): " << endl;
				if (respuesta == "Si") {
					Kobeni = true;
					cout << "He adivinado tu personaje ^^" << endl;
					system("pause");
					system("cls");
					return main();

					if (respuesta == "No") {
						Kobeni = false;
					}
				}
			}
			cout << "Estas pensando en un personaje de Jujutsu Kaisen? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				jujutsu = true;
				if (respuesta == "No") {
					jujutsu = false;
				}

				//Pregunta
				cout << "Estas pensando en Maki? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Maki = true;
					cout << "He adivinado tu personaje ^^" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Maki = false;
				}
			}
			cout << "Estas pensando en un personaje de Kimetsu no Yaiba? (Si/No): " << endl;
			cin >> respuesta;
			if (respuesta == "Si") {
				Kimetsu = true;
				if (respuesta == "No") {
					Kimetsu = false;
				}
				cout << "Estas pensando en Mitsuri? (Si/No): " << endl;
				cin >> respuesta;
				if (respuesta == "Si") {
					Mitsuri = true;
					cout << "He adivinado te personaje ^^" << endl;
					system("pause");
					system("cls");
					return main();
				}
				else if (respuesta == "No") {
					Mitsuri = false;
				}
			}
	}


}
    if (respuesta == "h")
	{
	cout << " Utiliza armas? (Si/No) " << endl; cin >> respuesta;
	if (respuesta == "Si")
	{
		cout << " Utiliza magia? (Si/No) " << endl; cin >> respuesta;
		if (respuesta == "Si")
		{
			cout << " Es peliblanco? (Si/No) " << endl; cin >> respuesta;
			if (respuesta == "Si")
			{
				cout << " Su personaje es el protagonista del anime >>Inuyasha<< (Si/No)" << endl; cin >> respuesta;
				if (respuesta == "Si")
				{
					cout << " Su personaje es Inuyasha " << endl;
					cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
					if (respuesta == "Si")
					{
						cout << " Que bien! He adivinado " << endl;
						system("pause");
						system("cls");
						return main();
					}
					else
					{
						cout << " Oh no, intentemos de nuevo " << endl;
						system("pause");
						system("cls");
						return main();
					}

				}
				else if (respuesta == "No")
				{
					cout << " Su personaje es Sesshumaru " << endl;
					cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
					if (respuesta == "Si")
					{
						cout << " Que bien! He adivinado " << endl;
						system("pause");
						system("cls");
						return main();
					}
					else
					{
						cout << " Oh no, intentemos de nuevo " << endl;
						system("pause");
						system("cls");
						return main();
					}
				}
			}
			else if (respuesta == "No")
			{
				cout << " Tiene apariencia humana? (Si/No)" << endl; cin >> respuesta;
				if (respuesta == "Si")
				{
					cout << " Su personaje es el protagonista de ChainSaw Man? (Si/No)" << endl; cin >> respuesta;
					if (respuesta == "Si")
					{
						cout << " Su personaje es Denji " << endl;
						cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
						if (respuesta == "Si")
						{
							cout << " Que bien! He adivinado " << endl;
							system("pause");
							system("cls");
							return main();
						}
						else
						{
							cout << " Oh no, intentemos de nuevo " << endl;
							system("pause");
							system("cls");
							return main();
						}
					}
					else if (respuesta == "No")
					{
						cout << " Su personaje es pelinegro? (Si/No)" << endl; cin >> respuesta;
						if (respuesta == "Si")
						{
							cout << " Su personaje es Suguru " << endl;
							cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
							if (respuesta == "Si")
							{
								cout << " Que bien! He adivinado " << endl;
								system("pause");
								system("cls");
								return main();
							}
							else
							{
								cout << " Oh no, intentemos de nuevo " << endl;
								system("pause");
								system("cls");
								return main();
							}
						}
						else if (respuesta == "No")
						{
							cout << " Su personaje es Kento " << endl;
							cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
							if (respuesta == "Si")
							{
								cout << " Que bien! He adivinado " << endl;
								system("pause");
								system("cls");
								return main();
							}
							else
							{
								cout << " Oh no, intentemos de nuevo " << endl;
								system("pause");
								system("cls");
								return main();
							}
						}
					}
				}
				else if (respuesta == "No")
				{
					cout << " Su personaje es Pochita" << endl;
					cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
					if (respuesta == "Si")
					{
						cout << " Que bien! He adivinado " << endl;
						system("pause");
						system("cls");
						return main();
					}
					else
					{
						cout << " Oh no, intentemos de nuevo " << endl;
						system("pause");
						system("cls");
						return main();
					}
				}
			}
		}
		else if (respuesta == "No")
		{
			cout << " Su personaje es peliblanco? (Si/No)" << endl; cin >> respuesta;
			if (respuesta == "Si")
			{
				cout << " Su personaje es Usui Takumi " << endl;
				cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
				if (respuesta == "Si")
				{
					cout << " Que bien! He adivinado " << endl;
					system("pause");
					system("cls");
					return main();
				}
				else
				{
					cout << " Oh no, intentemos de nuevo " << endl;
					system("pause");
					system("cls");
					return main();
				}
			}
			else if (respuesta == "No")
			{
				cout << " Su personaje es un demonio o un titan? (Si/No)" << endl; cin >> respuesta;
				if (respuesta == "Si")
				{
					cout << " Su personaje es Armin Arlelt " << endl;
					cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
					if (respuesta == "Si")
					{
						cout << " Que bien! He adivinado " << endl;
						system("pause");
						system("cls");
						return main();
					}
					else
					{
						cout << " Oh no, intentemos de nuevo " << endl;
						system("pause");
						system("cls");
						return main();
					}
				}
				else if (respuesta == "No")
				{
					cout << " Su personaje tiene una marca/cicatriz/perdio una parte de su cuerpo? (Si/No)" << endl;
					cin >> respuesta;
					if (respuesta == "Si")
					{
						cout << " Su personaje es canche? (Si/No)" << endl; cin >> respuesta;
						if (respuesta == "Si")
						{
							cout << " Su personaje es Erwin Smith " << endl;
							cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
							if (respuesta == "Si")
							{
								cout << " Que bien! He adivinado " << endl;
								system("pause");
								system("cls");
								return main();
							}
							else
							{
								cout << " Oh no, intentemos de nuevo " << endl;
								system("pause");
								system("cls");
								return main();
							}
						}
						else if (respuesta == "No")
						{
							cout << " Su personaje es un cazador de demonios? (Si/No)" << endl; cin >> respuesta;
							if (respuesta == "Si")
							{
								cout << " Su personaje es Tanjirooooo " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
							else if (respuesta == "No")
							{
								cout << " Su personaje es Levi Ackerman " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
						}
					}
					else if (respuesta == "No")
					{
						cout << " Su personaje es pelinegro? (Si/No)" << endl; cin >> respuesta;
						if (respuesta == "Si")
						{
							cout << " Su personaje usa una mascara de jabali? (Si/No)" << endl; cin >> respuesta;
							if (respuesta == "Si")
							{
								cout << " Su personaje es Inosuke Hashibira " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
							else if (respuesta == "No")
							{
								cout << " Su personaje suele utilizar el cabello medio atado? (Si/No)" << endl; cin >> respuesta;
								if (respuesta == "Si")
								{
									cout << " Su personaje es AkiHayakawa " << endl;
									cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
									if (respuesta == "Si")
									{
										cout << " Que bien! He adivinado " << endl;
										system("pause");
										system("cls");
										return main();
									}
									else
									{
										cout << " Oh no, intentemos de nuevo " << endl;
										system("pause");
										system("cls");
										return main();
									}
								}
								else if (respuesta == "No")
								{
									cout << " Su personaje tiene algun poder relacionado con el agua? (Si/No)" << endl; cin >> respuesta;
									if (respuesta == "Si")
									{
										cout << " Su personaje es Tomioka Giyu " << endl;
										cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
										if (respuesta == "Si")
										{
											cout << " Que bien! He adivinado " << endl;
											system("pause");
											system("cls");
											return main();
										}
										else
										{
											cout << " Oh no, intentemos de nuevo " << endl;
											system("pause");
											system("cls");
											return main();
										}
									}
									else if (respuesta == "No")
									{
										cout << " Su personaje es Muchiro Tokito " << endl;
										cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
										if (respuesta == "Si")
										{
											cout << " Que bien! He adivinado " << endl;
											system("pause");
											system("cls");
											return main();
										}
										else
										{
											cout << " Oh no, intentemos de nuevo " << endl;
											system("pause");
											system("cls");
											return main();
										}
									}
								}
							}
						}
						else if (respuesta == "No")
						{
							cout << " Su personaje tiene cabello canche/amarillo? (Si/No)" << endl; cin >> respuesta;
							if (respuesta == "Si")
							{
								cout << " Su personaje saca su power up cuando duerme? (Si/No)" << endl; cin >> respuesta;
								if (respuesta == "Si")
								{
									cout << " Su personaje es Zenitsu Agatsuma " << endl;
									cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
									if (respuesta == "Si")
									{
										cout << " Que bien! He adivinado " << endl;
										system("pause");
										system("cls");
										return main();
									}
									else
									{
										cout << " Oh no, intentemos de nuevo " << endl;
										system("pause");
										system("cls");
										return main();
									}
								}
								else if (respuesta == "No")
								{
									cout << " Su personaje es Kyojuro Rengoku " << endl;
									cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
									if (respuesta == "Si")
									{
										cout << " Que bien! He adivinado " << endl;
										system("pause");
										system("cls");
										return main();
									}
									else
									{
										cout << " Oh no, intentemos de nuevo " << endl;
										system("pause");
										system("cls");
										return main();
									}
								}

							}
							else if (respuesta == "No")
							{
								cout << " Su personaje es Trunks " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (respuesta == "No")
	{
		cout << " Utiliza magia? (Si/No) " << endl; cin >> respuesta;
		if (respuesta == "Si")
		{
			cout << " Su personaje es peliblanco? (Si/No)" << endl; cin >> respuesta;
			if (respuesta == "Si")
			{
				cout << " Su personaje suele tener tapada la boca? (Si/No)" << endl; cin >> respuesta;
				if (respuesta == "Si")
				{
					cout << " Su personaje es Toge Inumaki " << endl;
					cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
					if (respuesta == "Si")
					{
						cout << " Que bien! He adivinado " << endl;
						system("pause");
						system("cls");
						return main();
					}
					else
					{
						cout << " Oh no, intentemos de nuevo " << endl;
						system("pause");
						system("cls");
						return main();
					}

				}
				else if (respuesta == "No")
				{
					cout << " Su personaje es Satoru Gojo " << endl;
					cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
					if (respuesta == "Si")
					{
						cout << " Que bien! He adivinado " << endl;
						system("pause");
						system("cls");
						return main();
					}
					else
					{
						cout << " Oh no, intentemos de nuevo " << endl;
						system("pause");
						system("cls");
						return main();
					}
				}
			}
			else if (respuesta == "No")
			{
				cout << " Su personaje tiene apariencia humana? (Si/No)" << endl; cin >> respuesta;
				if (respuesta == "Si")
				{
					cout << " Es un demonio o un titan? (Si/No)" << endl; cin >> respuesta;
					if (respuesta == "Si")
					{
						cout << " Tiene una marca/cicatriz/perdio una parte de su cuerpo? (Si/No)" << endl; cin >> respuesta;
						if (respuesta == "Si")
						{
							cout << " Tiene cabello color rosado? (Si/No)" << endl; cin >> respuesta;
							if (respuesta == "Si")
							{
								cout << " Su personaje es una luna superior? (Si/No)" << endl; cin >> respuesta;
								if (respuesta == "Si")
								{
									cout << " Su personaje es Akaza " << endl;
									cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
									if (respuesta == "Si")
									{
										cout << " Que bien! He adivinado " << endl;
										system("pause");
										system("cls");
										return main();
									}
									else
									{
										cout << " Oh no, intentemos de nuevo " << endl;
										system("pause");
										system("cls");
										return main();
									}
								}
								else if (respuesta == "No")
								{
									cout << " Su personaje es Sukuna " << endl;
									cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
									if (respuesta == "Si")
									{
										cout << " Que bien! He adivinado " << endl;
										system("pause");
										system("cls");
										return main();
									}
									else
									{
										cout << " Oh no, intentemos de nuevo " << endl;
										system("pause");
										system("cls");
										return main();
									}
								}
							}
							else if (respuesta == "No")
							{
								cout << " Su personaje es Mahito " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
						}
						else if (respuesta == "No")
						{
							cout << " Su personaje tiene un grandioso parecido con Tesla de Shumatsu No Valkyrie? (Si/No)" << endl; cin >> respuesta;
							if (respuesta == "Si")
							{
								cout << " Su personaje es Muzan " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
							else if (respuesta == "No")
							{
								cout << " Su personaje es Naraku " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
						}
					}
					else if (respuesta == "No")
					{
						cout << " Su personaje es un estudiante de magia? (Si/No)" << endl; cin >> respuesta;
						if (respuesta == "Si")
						{
							cout << " Su personaje es pelinegro? (Si/No)" << endl; cin >> respuesta;
							if (respuesta == "Si")
							{
								cout << " Su personaje es muy musculoso? (Si/No)" << endl; cin >> respuesta;
								if (respuesta == "Si")
								{
									cout << " Su personaje es Aoi Todo " << endl;
									cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
									if (respuesta == "Si")
									{
										cout << " Que bien! He adivinado " << endl;
										system("pause");
										system("cls");
										return main();
									}
									else
									{
										cout << " Oh no, intentemos de nuevo " << endl;
										system("pause");
										system("cls");
										return main();
									}
								}
								else if (respuesta == "No")
								{
									cout << " Su personaje es Megumi Fushiguro " << endl;
									cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
									if (respuesta == "Si")
									{
										cout << " Que bien! He adivinado " << endl;
										system("pause");
										system("cls");
										return main();
									}
									else
									{
										cout << " Oh no, intentemos de nuevo " << endl;
										system("pause");
										system("cls");
										return main();
									}
								}
							}
							else if (respuesta == "No")
							{
								cout << " Su personaje es Yuji Itadori " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
						}
						else if (respuesta == "No")
						{
							cout << " Su personaje es Miroku " << endl;
							cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
							if (respuesta == "Si")
							{
								cout << " Que bien! He adivinado " << endl;
								system("pause");
								system("cls");
								return main();
							}
							else
							{
								cout << " Oh no, intentemos de nuevo " << endl;
								system("pause");
								system("cls");
								return main();
							}
						}
					}
				}
				else if (respuesta == "No")
				{
					cout << " Su personaje es un shinigami? (Si/No)" << endl; cin >> respuesta;
					if (respuesta == "Si")
					{
						cout << " Su personaje es Ryuk " << endl;
						cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
						if (respuesta == "Si")
						{
							cout << " Que bien! He adivinado " << endl;
							system("pause");
							system("cls");
							return main();
						}
						else
						{
							cout << " Oh no, intentemos de nuevo " << endl;
							system("pause");
							system("cls");
							return main();
						}

					}
					else if (respuesta == "No")
					{
						cout << " Su personaje es un tipo de oso? (Si/No)" << endl; cin >> respuesta;
						if (respuesta == "Si")
						{
							cout << " Su personaje es Panda Jujutsu Kaisen " << endl;
							cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
							if (respuesta == "Si")
							{
								cout << " Que bien! He adivinado " << endl;
								system("pause");
								system("cls");
								return main();
							}
							else
							{
								cout << " Oh no, intentemos de nuevo " << endl;
								system("pause");
								system("cls");
								return main();
							}
						}
						else if (respuesta == "No")
						{
							cout << " Su personaje es Shippo " << endl;
							cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
							if (respuesta == "Si")
							{
								cout << " Que bien! He adivinado " << endl;
								system("pause");
								system("cls");
								return main();
							}
							else
							{
								cout << " Oh no, intentemos de nuevo " << endl;
								system("pause");
								system("cls");
								return main();
							}
						}
					}
				}
			}
		}
		else if (respuesta == "No")
		{
			cout << "Su personaje es peliblanco? (Si/No)" << endl; cin >> respuesta;
			if (respuesta == "Si")
			{
				cout << " Su personaje es una pulga viejita? (Si/No)" << endl; cin >> respuesta;
				if (respuesta == "Si")
				{
					cout << " Su personaje es la Pulga Myoga " << endl;
					cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
					if (respuesta == "Si")
					{
						cout << " Que bien! He adivinado " << endl;
						system("pause");
						system("cls");
						return main();
					}
					else
					{
						cout << " Oh no, intentemos de nuevo " << endl;
						system("pause");
						system("cls");
						return main();
					}
				}
				else if (respuesta == "No")
				{
					cout << " Su personaje es Near " << endl;
					cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
					if (respuesta == "Si")
					{
						cout << " Que bien! He adivinado " << endl;
						system("pause");
						system("cls");
						return main();
					}
					else
					{
						cout << " Oh no, intentemos de nuevo " << endl;
						system("pause");
						system("cls");
						return main();
					}
				}
			}
			else if (respuesta == "No")//CONTINUAAAAAAAAAAAR no en peliblanco
			{
				cout << " Su personaje usualmente tiene una apariencia humana? (Si/No)" << endl; cin >> respuesta;
				if (respuesta == "Si")
				{
					cout << " Su personaje es un titan o un demonio? (Si/No)" << endl; cin >> respuesta;
					if (respuesta == "Si")
					{
						cout << " Su personaje es el protagonista del anime AOT? (Si/No)" << endl; cin >> respuesta;
						if (respuesta == "Si")
						{
							cout << " Su personaje es Eren Yeager " << endl;
							cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
							if (respuesta == "Si")
							{
								cout << " Que bien! He adivinado " << endl;
								system("pause");
								system("cls");
								return main();
							}
							else
							{
								cout << " Oh no, intentemos de nuevo " << endl;
								system("pause");
								system("cls");
								return main();
							}
						}
						else if (respuesta == "No")
						{
							cout << " Su personaje es un niño? (Si/No)" << endl; cin >> respuesta;
							if (respuesta == "Si")
							{
								cout << " Su personaje es Falco Grice " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
							else if (respuesta == "No")
							{
								cout << " Su personaje utiliza lentes? (Si/No)" << endl; cin >> respuesta;
								if (respuesta == "Si")
								{
									cout << " Su personaje es Zeke Jeager " << endl;
									cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
									if (respuesta == "Si")
									{
										cout << " Que bien! He adivinado " << endl;
										system("pause");
										system("cls");
										return main();
									}
									else
									{
										cout << " Oh no, intentemos de nuevo " << endl;
										system("pause");
										system("cls");
										return main();
									}

								}
								else if (respuesta == "No")
								{
									cout << " Su personaje es Reiner Braun " << endl;
									cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
									if (respuesta == "Si")
									{
										cout << " Que bien! He adivinado " << endl;
										system("pause");
										system("cls");
										return main();
									}
									else
									{
										cout << " Oh no, intentemos de nuevo " << endl;
										system("pause");
										system("cls");
										return main();
									}

								}
							}
						}
					}
					else if (respuesta == "No")
					{
						cout << " Su personaje tiene una marca/cicatriz/perdio una parte de su cuerpo? (Si/No)" << endl; cin >> respuesta;
						if (respuesta == "Si")
						{
							cout << " Su personaje es calvo? (Si/No)" << endl; cin >> respuesta;
							if (respuesta == "Si")
							{
								cout << " Su personaje es Krillin " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
							else if (respuesta == "No")
							{
								cout << " Su personaje es Mello " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
						}
						else if (respuesta == "No")
						{
							cout << " Su personaje es pelinegro? (Si/No)" << endl; cin >> respuesta;
							if (respuesta == "Si")
							{
								cout << " Una de las mayores cualidades de su personaje es su inteligencia? (Si/No)" << endl;
								cin >> respuesta;
								if (respuesta == "Si")
								{
									cout << " Su personaje es un ser de otro planeta? (Si/No)" << endl; cin >> respuesta;
									if (respuesta == "Si")
									{
										cout << " Su personaje es Vegeta " << endl;
										cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
										if (respuesta == "Si")
										{
											cout << " Que bien! He adivinado " << endl;
											system("pause");
											system("cls");
											return main();
										}
										else
										{
											cout << " Oh no, intentemos de nuevo " << endl;
											system("pause");
											system("cls");
											return main();
										}
									}
									else if (respuesta == "No")
									{
										cout << " Su personaje tiene ojeras? (Si/No)" << endl; cin >> respuesta;
										if (respuesta == "Si")
										{
											cout << " Su personaje es L " << endl;
											cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
											if (respuesta == "Si")
											{
												cout << " Que bien! He adivinado " << endl;
												system("pause");
												system("cls");
												return main();
											}
											else
											{
												cout << " Oh no, intentemos de nuevo " << endl;
												system("pause");
												system("cls");
												return main();
											}
										}
										else if (respuesta == "No")
										{
											cout << " Su personaje es gohan " << endl;
											cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
											if (respuesta == "Si")
											{
												cout << " Que bien! He adivinado " << endl;
												system("pause");
												system("cls");
												return main();
											}
											else
											{
												cout << " Oh no, intentemos de nuevo " << endl;
												system("pause");
												system("cls");
												return main();
											}
										}
									}
								}
								else if (respuesta == "No")
								{
									cout << " Su personaje es un extraterrestre? (Si/No)" << endl; cin >> respuesta;
									if (respuesta == "Si")
									{
										cout << " Su personaje es Son Goku " << endl;
										cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
										if (respuesta == "Si")
										{
											cout << " Que bien! He adivinado " << endl;
											system("pause");
											system("cls");
											return main();
										}
										else
										{
											cout << " Oh no, intentemos de nuevo " << endl;
											system("pause");
											system("cls");
											return main();
										}
									}
									else if (respuesta == "No")
									{
										cout << " Su personaje es exageradamente colocho? (Si/No)" << endl; cin >> respuesta;
										if (respuesta == "Si")
										{
											cout << " Su personaje es Mr. Satan " << endl;
											cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
											if (respuesta == "Si")
											{
												cout << " Que bien! He adivinado " << endl;
												system("pause");
												system("cls");
												return main();
											}
											else
											{
												cout << " Oh no, intentemos de nuevo " << endl;
												system("pause");
												system("cls");
												return main();
											}
										}
										else if (respuesta == "No")
										{
											cout << " Su personaje ha trabajado para encontrar a Kira? (Si/No)" << endl; cin >> respuesta;
											if (respuesta == "Si")
											{
												cout << " Su personaje es Matsuda " << endl;
												cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
												if (respuesta == "Si")
												{
													cout << " Que bien! He adivinado " << endl;
													system("pause");
													system("cls");
													return main();
												}
												else
												{
													cout << " Oh no, intentemos de nuevo " << endl;
													system("pause");
													system("cls");
													return main();
												}
											}
											else if (respuesta == "No")
											{
												cout << " Su personaje es Koga " << endl;
												cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
												if (respuesta == "Si")
												{
													cout << " Que bien! He adivinado " << endl;
													system("pause");
													system("cls");
													return main();
												}
												else
												{
													cout << " Oh no, intentemos de nuevo " << endl;
													system("pause");
													system("cls");
													return main();
												}
											}
										}
									}
								}
							}
							else if (respuesta == "No")
							{
								cout << " Su personaje es Light Yagami " << endl;
								cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
								if (respuesta == "Si")
								{
									cout << " Que bien! He adivinado " << endl;
									system("pause");
									system("cls");
									return main();
								}
								else
								{
									cout << " Oh no, intentemos de nuevo " << endl;
									system("pause");
									system("cls");
									return main();
								}
							}
						}
					}
				}
				else if (respuesta == "No")
				{
					cout << " Su personaje nació en el planeta Namekusei? (Si/No)" << endl; cin >> respuesta;
					if (respuesta == "Si")
					{
						cout << " Su personaje es Piccoro " << endl;
						cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/

					}
					else if (respuesta == "No")
					{
						cout << " Su personaje es Frezer " << endl;
						cout << " He acertado? (Si/No)" << endl; cin >> respuesta; /*__________________*/
						if (respuesta == "Si")
						{
							cout << " Que bien! He adivinado " << endl;
							system("pause");
							system("cls");
							return main();
						}
						else
						{
							cout << " Oh no, intentemos de nuevo " << endl;
							system("pause");
							system("cls");
							return main();
						}
					}
				}
			}
		}
		}

}
}
