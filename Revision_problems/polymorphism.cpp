#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	string Name;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
protected:
	string OwnerName;
    int ContentQuality;
public:
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
        ContentQuality = 0;
	}
	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
	void Subscribe() {
		SubscribersCount++;
	}
	void Unsubscribe() {
		if (SubscribersCount > 0)
			SubscribersCount--;
	}
	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);
	}
    void ChecContentQuality()
    {
        if(ContentQuality<5)
        {
            cout<<Name<<" has a bad content quality"<<endl;
        }
        else
        {
            cout<<Name<<" has a great content quality"<<endl;
        }
    }
};

class CookingYouTubeChannel : public YouTubeChannel {
public:
	CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {

	}
	void Practice() { // Different implementation in this class
		cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        ContentQuality++;
	}
};
 

class SingersYouTubeChannel : public YouTubeChannel {
public:
	SingersYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {

	}
	void Practice() { // Different implementation in this class
		cout << OwnerName << " is practicing singing, learning new songs, learning how to dance..." << endl;
        ContentQuality++;
    }
}; 

int main()
{
    SingersYouTubeChannel singer("John Sings", "John");
    CookingYouTubeChannel cook("John Cooks", "John");
    singer.Practice();
    cook.Practice();
    singer.Practice();
    singer.Practice();
    singer.Practice();
    singer.Practice();
    singer.Practice();

    // Using pointer
    // // A pointer of base class can point to a variable of the derived class
    // YouTubeChannel * sings = &singer;
    // YouTubeChannel * cooks = &cook;
    // // This pointer can access the base class function
    // sings->ChecContentQuality();
    // cooks->ChecContentQuality();

    singer.ChecContentQuality();
    cook.ChecContentQuality();
    return 0;
}