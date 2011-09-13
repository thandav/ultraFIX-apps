#include "SocketInitiator.h"
#include "SessionSettings.h"
#include "FileStore.h"

#include "FIXApplication.h"

int main(int argc, const char** argv)
{
  std::cout << "client started." << std::endl;
  if (argc < 2) {
    std::cout << "usage: ./client <config_file>" << std::endl;
    exit(1);
  }
  std::string fileName = argv[1];
  std::cout << "config_file: " << fileName << std::endl;
  FIX::SessionSettings settings(fileName);
  FIX::FileStoreFactory storeFactory(settings);
  FIXApplication application;
  FIX::SocketInitiator initiator(application, storeFactory, settings);

  initiator.start();

  while (1) {
    sleep(1);
  }

  initiator.stop();
  std::cout << "Bye" << std::endl;
  return 0;
}

