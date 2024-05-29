#include <iostream>
#include <random>

int Piscina() {
	std::cout << std::endl;																                               // Sure it's a calming notion, perpetual in motion
	std::cout << std::endl;																                              // But I don't need the comfort of any lies
	std::cout << std::endl;																                             // For I have seen the ending and there is no ascending
	std::cout << std::endl;																                            // Rise
	std::cout << "==========================================================================================================================" << std::endl;

	std::cout << "	Bine ati venit la Aqua Park!" << std::endl;							                         //Oh, back when I was younger, was told by other youngsters
	std::cout << "	Te rog introdu varsta ta: ";										                        //That my end will be torture beneath the earth
	int anisori = 0;																	                       //'Cause I don't see what they see, when death is staring at me
	std::cin >> anisori;																                      //I see a window, a limit, to live it, or not at all

	if (anisori <= 7 && anisori >= 0) {
		std::cout << "____________________________________________" << std::endl;                          // If you could pull the lever to carry on forever
		std::cout << "  Biletul tau este gratis!" << std::endl;							                  // Would your life even matter anymore?
		std::cout << "____________________________________________" << std::endl;                        // Sure it's a calming notion, perpetual in motion
		// But it's not what you signed up for
	}

	else if (anisori > 7 && anisori < 80) {
		std::cout << "____________________________________________" << std::endl;                   // I'm sure there won't always be sunshine
		std::cout << "  Biletul tau este 30 de ron!" << std::endl;					               // But there's this momentary beam of light
		std::cout << "____________________________________________" << std::endl;                 // You don't have to wait those salty decades
		// To get through the gate, it's all in front of your face
	}

	else {
		std::cout << "____________________________________________" << std::endl;            // I'm sure there won't always be sunshine
		std::cout << "  Varsta invalida!" << std::endl;								        // I'm sure there won't always be sunshine
		std::cout << "____________________________________________" << std::endl;          // But there's this momentary beam of light

		Piscina();
	}
	std::cout << "==========================================================================================================================" << std::endl;
	return 0;																		   // I could cross the ocean in a fit of devotion
}																					  // For every shining second, this fragile body beckons
																					 // You think you're owed it better believing ancient letters
																					// Sure it's a calming notion, but it's a lie...

																										// "NOTION" , The Rare Ocassions


int Universitate() {
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "==========================================================================================================================" << std::endl;


	std::cout << "	O zi buna si mult noroc iti dorim; pentru a vedea statusul tau ca si cursant," << std::endl;                                           // Every time we lie awake
	std::cout << "	te rog introdu punctele acumulate la evaluare: ";                                                                                     // After every hit we take
	int puncte = 0;                                                                                                                                      // Every feeling that I get
	std::cin >> puncte;                                                                                                                                 // But I haven't missed you yet
	std::cout << std::endl;
	                                                                                                                                                  // Every roommate kept awake
	if (puncte >= 90 && puncte <= 100) {                                                                                                             // By every sigh and scream we make
		std::cout << "____________________________________________" << std::endl;                                                                   // All the feelings that I get
		std::cout << "Felicitari!  Esti admis!" << std::endl;                                                                                      // But I still don't miss you yet
		std::cout << "____________________________________________" << std::endl;
	}                                                                                                                                            // Only when I stop to think about it
	else if (puncte < 90 && puncte >= 1) {
		std::cout << "____________________________________________" << std::endl;                                                              // I hate everything about you
		std::cout << "L+ratio Respins, Get gud." << std::endl;                                                                                // Why do I love you?
		std::cout << "____________________________________________" << std::endl;                                                            // I hate everything about you
	}                                                                                                                                       // Why do I love you?
	else {
		std::cout << "____________________________________________" << std::endl;                                                         // Every time we lie awake
		std::cout << "Punctaj invalid." << std::endl;                                                                                    // After every hit we take
		std::cout << "____________________________________________" << std::endl;                                                       // Every feeling that I get
		                                                                                                                               // But I haven't missed you yet
		Universitate();
	}
	std::cout << "==========================================================================================================================" << std::endl;
	return 0;
}
                                                                                                                                 // Only when I stop to think about it

                                                                                                                               // I hate everything about you
                                                                                                                              // Why do I love you?
                                                                                                                             // I hate everything about you
                                                                                                                            // Why do I love you?

                                                                                                                          // Only when I stop to think about you
                                                                                                                         // I know
                                                                                                                        // Only when you stop to think about me
                                                                                                                       // Do you know?

                                                                                                                     // I hate everything about you
                                                                                                                    // Why do I love you?
                                                                                                                   // You hate everything about me
                                                                                                                  // Why do you love me?

                                                                                                                // I hate
                                                                                                               // You hate
                                                                                                              // I hate
                                                                                                             // You love me
                                                                                                            // I hate everything about you
                                                                                                           // Why do I love you?

	                                                                                                                    // "I Hate Everything About You" , Three Days Grace


int Impozit() {
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "==========================================================================================================================" << std::endl;

	std::cout << "	Buna ziua, te rog introdu venitul tau lunar brut (euro): ";
	double venit = 0;
	std::cin >> venit;

	std::cout << std::endl;

	std::cout << "	Te rog introdu cheltuielile tele fixe: ";
	double cheltuieli = 0;
	std::cin >> cheltuieli;

	std::cout << std::endl;

	double profit = 0;
	profit = venit - cheltuieli;
	std::cout << "  Profitul tau brut este: " << profit << std::endl;
	std::cout << std::endl;

	if (profit < 0) {
		std::cout << "____________________________________________" << std::endl;
		std::cout << "  In functie ce profitul tau anual este negativ, nu putem pune taxe pe datorii, taxele sunt anulate." << std::endl;
		std::cout << "	" << profit << " - 0 = " << profit << "Euro" << std::endl;
		std::cout << "____________________________________________" << std::endl;


	}
	else if (profit > 0 && profit <= 500) {
		std::cout << "____________________________________________" << std::endl;
		std::cout << "  In functie ce profitul tau anual se incadreaza la grupa de profit minim," << std::endl;
		std::cout << "  taxele sunt nulle." << std::endl;
		std::cout << "	" << profit << " - 0 = " << profit << "Euro" << std::endl;
		std::cout << "____________________________________________" << std::endl;


	}
	else if (profit > 500 && profit <= 2000) {
		std::cout << "____________________________________________" << std::endl;
		std::cout << "  In functie ce profitul tau nu este incadrat in nicio categorie speciala," << std::endl;
		std::cout << "  profiturile tale sunt eligibile pentru taxare: " << std::endl;
		double taxe = profit - (25.0 / 100.0 * profit);
		std::cout << "	" << profit << " - 25% = " << taxe << "Euro" << std::endl;
		std::cout << "____________________________________________" << std::endl;


	}
	else if (profit > 2000 && profit <= 5000) {
		std::cout << "____________________________________________" << std::endl;
		std::cout << "  In functie ce profitul tau nu este incadrat in nicio categorie speciala," << std::endl;
		std::cout << "  profiturile tale sunt eligibile pentru taxare: " << std::endl;
		double taxe = profit - (35.0 / 100.0 * profit);
		std::cout << "	" << profit << " - 35% = " << taxe << "Euro" << std::endl;
		std::cout << "____________________________________________" << std::endl;


	}
	else if (profit > 5000 && profit <= 10000) {
		std::cout << "____________________________________________" << std::endl;																                             // If I had to
		std::cout << "  In functie ce profitul tau nu este incadrat in nicio categorie speciala," << std::endl;																// I would put myself right beside you
		std::cout << "  profiturile tale sunt eligibile pentru taxare: " << std::endl;															                           // So let me ask
		double taxe = profit - (45.0 / 100.0 * profit);																													  // Would you like that?
		std::cout << "	" << profit << " - 45% = " << taxe << "Euro" << std::endl;															                             // Would you like that?
		std::cout << "____________________________________________" << std::endl;
		                                                                                                                                                               // And I don't mind
	                                                                                                                                                                  // If you say this love is the last time
	}																																								 // So now I'll ask
	else if (profit > 10000 && profit <= 20000) {																													// Do you like that?
		std::cout << "____________________________________________" << std::endl;													                               // Do you like that?
		std::cout << "  In functie ce profitul tau nu este incadrat in nicio categorie speciala," << std::endl;
		std::cout << "  profiturile tale sunt eligibile pentru taxare: " << std::endl;													                         // No!
		double taxe = profit - (46.0 / 100.0 * profit);
		std::cout << "	" << profit << " - 46% = " << taxe << "Euro" << std::endl;																			   // Something's getting in the way.
		std::cout << "____________________________________________" << std::endl;												                              // Something's just about to break.
		                                                                                                                                                     // I will try to find my place in the diary of Jane.
	                                                                                                                                                        // So tell me how it should be.
	}
	else if (profit > 20000 && profit <= 50000) {																										  // Try to find out what makes you tick.
		std::cout << "____________________________________________" << std::endl;											                             // As I lie down
		std::cout << "  In functie ce profitul tau nu este incadrat in nicio categorie speciala," << std::endl;											// Sore and sick.
		std::cout << "  profiturile tale sunt eligibile pentru taxare: " << std::endl;										                           // Do you like that?
		double taxe = profit - (47.0 / 100.0 * profit);																								  // Do you like that?
		std::cout << "	" << profit << " - 47% = " << taxe << "Euro" << std::endl;
		std::cout << "____________________________________________" << std::endl;										                            // There's a fine line between love and hate.
		                                                                                                                                           // And I don't mind.
	                                                                                                                                              // Just let me say that
	}																																			 // I like that
	else if (profit > 50000 && profit <= 100000) {																								// I like that
		std::cout << "____________________________________________" << std::endl;
		std::cout << "  In functie ce profitul tau nu este incadrat in nicio categorie speciala," << std::endl;								  // Something's getting in the way.
		std::cout << "  profiturile tale sunt eligibile pentru taxare: " << std::endl;								                         // Something's just about to break.
		double taxe = profit - (48.0 / 100.0 * profit);																						// I will try to find my place in the diary of Jane.
		std::cout << "	" << profit << " - 48% = " << taxe << "Euro" << std::endl;							                               // As I burn another page,
		std::cout << "____________________________________________" << std::endl;							                              // As I look the other way.
		                                                                                                                                 // I still try to find my place in the diary of Jane.
	                                                                                                                                    // So tell me how it should be.
	}
	else if (profit > 100000) {																									      // Desperate, I will crawl
		std::cout << "____________________________________________" << std::endl;						                             // Waiting for so long
		std::cout << "  In functie ce profitul tau nu este incadrat in nicio categorie speciala," << std::endl;					    // No love, there is no love.
		std::cout << "  profiturile tale sunt eligibile pentru taxare: " << std::endl;					                           // Die for anyone
		double taxe = profit - (50.0 / 100.0 * profit);																			  // What have I become?
		std::cout << "	" << profit << " - 50% = " << taxe << "Euro" << std::endl;
		std::cout << "____________________________________________" << std::endl;				                                // Something's getting in the way.
		                                                                                                                       // Something's just about to break.
	                                                                                                                          // I will try to find my place in the diary of Jane.
	}																														 // As I burn another page,
	else {																													// As I look the other way.
		std::cout << "____________________________________________" << std::endl;				                           // I still try to find my place in the diary of Jane
		std::cout << "   imput invalid." << std::endl;
		std::cout << "____________________________________________" << std::endl;							             // "The Diary of Jane" , Breaking Benjamin
	}
	std::cout << "==========================================================================================================================" << std::endl;
	return 0;
}

int Joc() {
	std::cout << "==========================================================================================================================" << std::endl;

	std::random_device aleatoriu;
	std::mt19937 generator(aleatoriu());
	std::uniform_int_distribution<> distribuitor(1, 10);

	int secret = distribuitor(generator);
	const int incercari = 3;

	std::cout << std::endl;
	std::cout << "Ghiceste numarul secret! (1-10). Ai " << incercari << " incercari." << std::endl;
	std::cout << std::endl;

	for (int nr_de_incercari = 1; nr_de_incercari <= incercari; ++nr_de_incercari) {
		int ghicit;
		std::cout << std::endl;
		std::cout << "Incercarea numarul: " << nr_de_incercari << ": ";
		std::cin >> ghicit;

		if (ghicit == secret) {
			std::cout << std::endl;
			std::cout << "Ce noroc si sanatate! Ai ghicit numarul" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "==========================================================================================================================" << std::endl;
			return 0;
		}
		else if (ghicit < secret) {
			std::cout << std::endl;
			std::cout << "Nu Nu Nu, numarul secret este mai mare." << std::endl;
		}
		else {
			std::cout << std::endl;
			std::cout << "Nu Nu Nu, numarul secret este mai mic." << std::endl;						                    // Imi citeai in palma linii
		}																											   // Ma minteai si te credeam c-o sa ne tinem
	}																												  // Imi spuneai ca suntem tineri
	std::cout << std::endl;		                                                                                     // Era aproape imposibil cuvantul "despartire"
	std::cout << std::endl;				                                                                            // Era departe si durerea 
	std::cout << std::endl;				                                                                           // Poate una imorala
	std::cout << std::endl;				                                                                          // Sora cu placerea, sora cu libertatea pura
	std::cout << "L+ratio, ai gresit!  Numarul secret era: " << secret << std::endl;				             // A mea si a ta
	std::cout << std::endl;				                                                                        // Doi jucatori pe bluff, dar cu all-in pan la final
	std::cout << std::endl;
	std::cout << std::endl;						                                                                                // "Pana la sange" , Carla's Dreams

	std::cout << "==========================================================================================================================" << std::endl;
	return 0;
}



int main()
{
	std::cout << "==========================================================================================================================" << std::endl;

	std::cout << std::endl;
	std::cout << "			Salutare!" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "	Te rog sa introduci ce tema doresti sa rulezi: " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "1. Piscina" << std::endl;
	std::cout << "2. Universitatea" << std::endl;
	std::cout << "3. Impozitul" << std::endl;
	std::cout << "4. Joculetul" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	int alegere = 0;
	std::cout << "  Alegerea ta: ";
	std::cin >> alegere;


	if (alegere == 1) {
		Piscina();
	}
	else if (alegere == 2) {
		Universitate();
	}
	else if (alegere == 3) {
		Impozit();
	}
	else if (alegere == 4) {
		Joc();
	}

	std::cout << "==========================================================================================================================" << std::endl;
	return 0;
}
