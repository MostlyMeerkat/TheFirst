//  asdfasdfasdfasdfasdf
#include <iostream>
#include <iomanip>
using namespace std;

void Fin() {
    int width = 100;
    int height = 3;


    cout << endl;
    for(int i = 0; i < height; ++i) {
        cout << setw(width) << setfill('*') << "" << endl;
    }
    cout << setw(width / 2) << setfill('*') << " FIN ";
    cout << setw(width / 2) << setfill('*') << "" << endl;
}
char GetUserInput(char userInput) {
    cout << "Entra una respuesta: " << endl;
    cin >> userInput;
    return userInput;
}

void Desobedencia() {
    char userInput = '\0';
    cout << "Molesto, decides desobedecer al General Zaragosa. Esperas hasta que todos rompan files, y tomas tu brigada contigo." << endl;
    cout << "¿Adónde irás?" << endl;
    cout << "a) Al Fuerte de Guadalupe" << endl;
    cout << "b) Al Fuerte de Loreto" << endl;
    cout << "c) A defender la Iglesia de los Remedios" << endl;
    userInput = GetUserInput(userInput);

    if(userInput == 'a') {
        cout << "Vas con tu brigada pequeña armada con machetes al Fuerte de Guadalupe. Cuando suena la campana de la iglesia," << endl
                << "tu y tus hombres atacan a los franceses mano a mano." << endl;
        cout << endl;
        cout << setw(82) << setfill('.') << "" << endl;
        cout << endl;
        cout << "Después de cinco horas de combate, los franceses empiezan a huirse. ¡Lo hiciste! ¡Ganaste la Batalla de Puebla!" << endl;
        Fin();
    }
    else if(userInput == 'b') {
        cout << "Vas al Fuerte de Loreto para defenderlo. Te unes con las tropas que se encuentran allí. Esperas mucho tiempo, pero toda" << endl
             << "la atención de los franceses está enfocado en el Fuerte de Guadalupe." << endl;
        cout << "Tomas tus hombres al Fuerte de Guadalupe para ayudar con la batalla, pero ya es demasiado tarde. Restan pocos soldados mexicanos," << endl
             << "y aunque te unes con ellos, los Franceses rápidamente vencen tus fuerzas. Tú y todos tus hombres mueren, y los mexicanos peirden" << endl
             << "la Batalla de Puebla." << endl;
        Fin();
    }
    else if(userInput == 'c') {
        cout << "En la Iglesia de los Remedios, te encuentras al puesto de mando de General Zaragosa. Tal vez huberia sabido si solo escucharas." << endl;
        cout << "Zaragosa te ve desde su lugar donde estaba mandando telegramas a la Ciudad de México y manda que te vayas a la carcel." << endl;
        cout << endl;
        cout << setw(82) << setfill('.') << "" << endl;
        cout << endl;
        cout << "Después de cinco horas en la carcel, escuchas gritos victoriosos - pero no son de los Mexicanos. Perdieron la Batalla de Puebla, " << endl
             << "y tu y tus hombres son prisioneros de guerra." << endl;
        Fin();
    }
    else {
        cout << "Selección inválido. Intenta otra vez." << endl;
        Desobedencia();
    }
}

void Mision() {          //from: Destination()
    cout << "\"Lucas!\" Te grita Zaragosa. \"¡Preséntate!\"" << endl;
    cout << "Te adelantas, nervioso." << endl;
    cout << "\"Veo que tu y tus hombres son muy talentosos con el machete. Tengo una misión especial para vosotros."
         << "¿Lo aceptas?\"" << endl;
    cout << "a) Sí" << endl;
    cout << "b) No" << endl;
    char userInput = GetUserInput('\0');

    if(userInput == 'a') {
        cout << "\"¡Sí, Señor!\" Respondes con valentía. \"Mis hombres están listos para defender a la patria de cualquier forma.\"" << endl;
        cout << "\"Bien,\" dice Zaragosa. \"Necesito que vayas al Fuerte de Guadalupe con tus amigos, los otros dos Juanes, " << endl
             << "para atacar a los franceses mano a mano. Vosotros seréis nuestra primera línea de defensa." << endl;
        cout << "\"Nuestros enemigos son los primeros soldados del mundo, pero vosotros sois los primeros hijos de México. Soldados: leo en vuestra frente la victoria.\"" << endl;
        cout << "Emocionado, tomas tu brigada pequeña armada con machetes al Fuerte de Guadalupe. Cuando suena la campana de la iglesia," << endl
             << "tu y tus hombres atacan a los franceses mano a mano." << endl;
        cout << setw(82) << setfill('.') << "" << endl;
        cout << "Después de cinco horas de combate, los franceses empiezan a huirse. ¡Lo hiciste! ¡Ganaste la Batalla de Puebla!" << endl;
        Fin();
    }
    else if(userInput == 'b') {
        cout << "\"¿Desobedecerás a tu general?\" Te pregunta Zaragosa. \"Bueno, entonces irás al suroeste. No habrá lucha allí." << endl;
        cout << "Gracias a tus tonterías, te vas al sur-oeste, donde quedas durante toda la batalla. Al norte, los franceses toman el" << endl
             << " Fuerte de Guadalupe y los Mexicanos pierden la Batalla de Puebla. Al menos no moriste!" << endl;
        Fin();
    }
    else {
        cout << "Selección inválido. Intenta otra vez." << endl;
        Mision();
    }
}


void Obediencia() {               //From: Summer() or Destination()
    cout << "Uh oh. Parece que el General Ignacio Zaragosa está furioso contigo. \"¿Sabes qué?\" dice Zaragosa, airado," << endl
         << "\"¡No quiero que estés arruinando a batalla con tus niñerías! Vete con tus hombres al suroeste. No habrá lucha allí.\"" << endl;
    cout << "¿Que haces?" << endl;
    cout << "a) Me voy al suroeste." << endl;
    cout << "b) General Zaragosa no sabe nada. Le voy a desobedecer." << endl;
    char userInput = GetUserInput('\0');

    if(userInput == 'a') {
        cout << "Gracias a tus tonterías, te vas al sur-oeste, donde quedas durante toda la batalla. Al norte, los franceses toman el" << endl
             << "Fuerte de Guadalupe y los Mexicanos pierden la Batalla de Puebla. Al menos no moriste!" << endl;
        Fin();
    }
    else if(userInput == 'b') {
        cout << "" << endl;
        Desobedencia();
    }
    else {
        cout << "Selección inválido. Intenta otra vez." << endl;
        Obediencia();
    }
}

void Linea() {                //De: Inicio()
    cout << "Empiezas a formarse con los demás. Todos parecen nerviosos pero determinados. Mientras andas hacia tu lugar, ves" << endl
         << "a tus amigos, Juan Nepomuceno Méndez Sánchez y Juan Crisóstomo Bonilla Pérez." << endl;
    cout << "¿Qué haces?" << endl;
    cout << "a) Me pongo en formación. No es momento apropriado platicar." << endl;
    cout << "b) ¡Son mis amigos! Hay que hablarles." << endl;
    char userInput = GetUserInput('\0');


    if(userInput ==  'a' ) {
        cout << "Te pones a atención en línea. Algo importante ha de estar pasando." << endl;
        Mision();
    }
    else if(userInput == 'b') {
        cout << "Te pones a platicar con tus amigos, Juan y Juan." << endl
             << " \"¡Lucas!\" Te grita General Zaragosa. \"¡Cállate! Ya casi están los franceses sobre nosotros!\"" << endl;
        Obediencia();
    }
    else {
        cout << "Selección inválido. Intenta otra vez." << endl;
        Linea();
    }
}

void Inicio() {

    cout << "Te despierta una trompeta. Ves a tu reloj. Son las cinco de la mañana. Estás muy cansado de la noche anterior, porque apenas" << endl
         << "llegaste de las montañas con tus valientes hombres, armados con sus machetes." << endl;
    cout << "¿Te listas de inmediato o tardas en levantarte?" << endl;
    cout << "a) Me listo de inmediato. Me necesita la patria." << endl;
    cout << "b) Estoy bien cansado. Me tardo." << endl;
    char userInput = GetUserInput('\0');

    if (userInput == 'a') {    //'if' 1
        Linea();
    }
    else if (userInput == 'b') {
        cout << "Tardas en levantarte. Cuando sales de la tienda, todos ya están formados. \"Lucas!\" Te grita General Zaragosa.\"Tarde otra vez.\"" << endl;
        Obediencia();
    }
    else {
        cout << "Selección inválido. Intenta otra vez." << endl;
        Inicio();
    }
}


int main() {
    int welcomeHeight = 2;
    for(unsigned int i = 0; i < welcomeHeight; ++i) {
        cout << setw(100) << setfill('*') << "" << endl;
    }
    cout << setw(50) << setfill('*') << " LA BATALLA DE PUEBLA ";
    cout << setw(50) << setfill('*') << "" << endl;
    cout << endl;
    cout << "Se juega este juego al teclear una tecla cuando se solicita (a, b, o c) y presionar \"Entro\"." << endl;
    cout << "Este juego se trata de la Batalla de Puebla, el día 5 de mayo, 1862. Tu nombre es Juan Francisco Lucas." << endl;
    cout << endl;
    cout << setw(82) << setfill('.') << "" << endl;
    cout << endl;

    Inicio();

    return 0;
}
