#include <iostream>
#include <string>

using namespace std;

class Spotify {
private:
    string title;
    string artist;

    int duration;

public:
    Spotify(string _title, string _artist, int _duration) : title(_title), artist(_artist), duration(_duration) {}

    string getTitulo() const 
    {
        return title;
    }

    string getArtista() const 
    {
        return artist;
    }

    int getDuration() const
    {
        return duration;
    }
    
};

class SpotifyList 
{
private:
    static const int max_songs = 100;
    Spotify songs[max_songs];
    int numCanciones;
    vector <Spotify> songs;

public:
    SpotifyList() : numCanciones(0) {}

    void addSong(const Spotify& cancion) 
    {
        if (numCanciones < max_songs) 
        {
            songs[numCanciones++] = cancion;
        } 
        else 
        {
            cout << "The list of reproduction is full." << endl;
        }
    }

    void mostrarCanciones() const 
    {
        cout << "List of reproduction:" << endl;
        for (int i = 0; i < numCanciones; ++i) 
        {
            cout << songs[i].getTitulo() << " - " << songs[i].getArtista() << endl;
        }
    }

    void searchByTitleAZ() 
    {
        sort(songs.begin(), songs.end(), [](const Spotify& a, const Spotify& b) 
        {
            return a.getTitle() < b.getTitle();
        }
        );
    }

    void searchByArtistZA() 
    {
        sort(songs.begin(), songs.end(), [](const Spotify& a, const Spotify& b) 
        {
            return a.getArtist() > b.getArtist();
        });
    }

    void filterByDuration(int minDuration, int maxDuration) 
    {
        vector<Spotify> filteredSongs;
        for (const auto& song : songs) 
        {
            if (song.getDuration() >= minDuration && song.getDuration() <= maxDuration) 
            {
                filteredSongs.push_back(song);
            }
        }
        songs = filteredSongs;
    }
    vector<Spotify> searchByTitleStartingWith(char letter) 
    {
        vector<Spotify> foundSongs;
        for (const auto& song : songs) 
        {
            if (song.getTitle()[0] == letter) 
            {
                foundSongs.push_back(song);
            }
        }
        return foundSongs;

        }
        vector<Spotify> searchByArtist(const string& artistName) 
        {
        vector<Spotify> foundSongs;
        for (const auto& song : songs) 
        {
            if (song.getArtist() == artistName) 
            {
                foundSongs.push_back(song);
            }
        }
        return foundSongs;
    }

    void showSongs() const 
    {
        for (const auto& song : songs) 
        {
            cout << song.getTitle() << " - " << song.getArtist() << " (" << song.getDuration() << " segundos)" << endl;
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

int main() 
{
    SpotifyList playlist;

    Spotify SpotifyList1("La nasa siempre manda cohetes", "Mercromina", 180);
    Spotify SpotifyList2("Pim pam toma lacasitos", "Thedolarbil",120);
    Spotify SpotifyList3("Pennywise", "Angerfist",140);
    Spotify SpotifyList4("Sexy hard", "Kenneth",240);
    Spotify SpotifyList5("Do this", "DJ Bruud",150);
    Spotify SpotifyList6("Artificial noise", "Klofama",320);
    Spotify SpotifyList7("WTF is hardcore", "Vistor Krum",120);
    Spotify SpotifyList8("Crying Nasty", "JXLN",345);
    Spotify SpotifyList9("Bring it fine", "TEKKNO",254);
    Spotify SpotifyList10("Anonimu$", "Thedolarbil",126);

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
int main() 
{
    cout << "Organized by title (A-Z):" << endl;
    playlist.sortByTitleAZ();
    playlist.showSongs();
    cout << endl;

    cout << "Organized by artist (Z-A):" << endl;
    playlist.sortByArtistZA();
    playlist.showSongs();
    cout << endl;

    cout << "Organized by songs that have a duration between 1 and 3 minutes:" << endl;
    playlist.filterByDuration(60, 180);
    playlist.showSongs();
    cout << endl;

    char startingLetter = 'C';
    cout << "Organized by songs that start with letter c are '" << startingLetter << "':" << endl;
    vector<Spotify> foundSongs = playlist.searchByTitleStartingWith(startingLetter);
    for (const auto& song : foundSongs) 
    {
        cout << song.getTitulo() << " - " << song.getArtista() << endl;
    }
    cout << endl;

    string artistName = "Artist A";
    cout << "Organized by songs from artist A '" << artistName << "':" << endl;
    foundSongs = playlist.searchByArtist(artistName);
    for (const auto& song : foundSongs) 
    {
        cout << song.getTitle() << " - " << song.getArtist() << endl;
    }
    cout << endl;

    return 0;
}
