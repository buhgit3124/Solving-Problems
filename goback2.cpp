#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_FRAMES = 100;

int main() {
  int numFrames, windowSize;
  int totalFramesSent = 0;
  srand(time(NULL));

  cout << "Enter the total number of frames: ";
  cin >> numFrames;

  cout << "Enter the window size: ";
  cin >> windowSize;

  int currentFrame = 1;

  while(currentFrame <= numFrames) {
    int numSent = 0;

    for(int i = currentFrame; i < currentFrame + windowSize && i <= numFrames; i++) {
      cout << "Sending frame " << i << endl;
      totalFramesSent++;
      numSent++;
    }

    for(int i = currentFrame; i < currentFrame + numSent && i <= numFrames; i++) {
      int ack = rand() % 2;

      if(ack) {
        cout << "Acknowledgment received for frame " << i << endl;
      } else {
        cout << "Timeout occurred for frame " << i << endl;
        cout << "Retransmitting window..." << endl;
        break;
      }
    }

    currentFrame += numSent;
  }

  cout << "Total number of frames sent and resent: " << totalFramesSent << endl;

  return 0;
}