#include <iostream>
#include <string>

using namespace std;

class Spotify {
private:
    string title;
    string artist;

public:
    Spotify(string _titulo, string _artista) : title(_titulo), artist(_artista) {}

    string getTitulo() const 
    {
        return title;
    }

    string getArtista() const 
    {
        return artist;
    }
};

class SpotifyList 
{
private:
    static const int max_songs = 100;
    Spotify songs[max_songs];
    int numCanciones;

public:
    SpotifyList() : numCanciones(0) {}

    void addSong(const Spotify& cancion) 
    {
        if (numCanciones < max_songs) {
            songs[numCanciones++] = cancion;
        } 
        else 
        {
            cout << "The list of reproduction is full." << endl;
        }
    }

    void mostrarCanciones() const 
    {
        cout << "Lista de reproduccion:" << endl;
        for (int i = 0; i < numCanciones; ++i) 
        {
            cout << songs[i].getTitulo() << " - " << songs[i].getArtista() << endl;
        }
    }
};

struct Node 
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

void insertarInicio(Node *&head, int val) 
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void imprimirLista(Node *head) 
{
    while (head != nullptr) 
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Spotify SpotifyList1("La nasa siempre manda cohetes", "Mercromina");
    Spotify SpotifyList2("Pim pam toma lacasitos", "Thedolarbil");
    Spotify SpotifyList3("Pennywise", "Angerfist");
    Spotify SpotifyList4("Sexy hard", "Kenneth");
    Spotify SpotifyList5("Do this", "DJ Bruud");
    Spotify SpotifyList6("Artificial noise", "Klofama");
    Spotify SpotifyList7("WTF is hardcore", "Vistor Krum");
    Spotify SpotifyList8("Crying Nasty", "JXLN");
    Spotify SpotifyList9("Bring it fine", "TEKKNO");
    Spotify SpotifyList10("Anonimu$", "Thedolarbil");

    completeList.addSong(SpotifyList1);
    completeList.addSong(SpotifyList2);
    completeList.addSong(SpotifyList3);
    completeList.addSong(SpotifyList5);
    completeList.addSong(SpotifyList8);
    completeList.addSong(SpotifyList10);

    completeList.mostrarCanciones();

    SpotifyList yourList;
    yourList.addSong(SpotifyList1);
    yourList.addSong(SpotifyList2);
    yourList.addSong(SpotifyList3);

    yourList.mostrarCanciones();

    SpotifyList friendList;
    friendList.addSong(SpotifyList4);
    friendList.addSong(SpotifyList2);
    friendList.addSong(SpotifyList3);
    friendList.addSong(SpotifyList4);
    friendList.addSong(SpotifyList5);
    friendList.addSong(SpotifyList6);

    friendList.mostrarCanciones();

    Node *head = nullptr;
    insertarInicio(head, 3);
    insertarInicio(head, 2);
    insertarInicio(head, 1);

    cout << "Jams list:" << endl;
    imprimirLista(head);

    return 0;
}
