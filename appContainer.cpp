#include "test/tests.h"

#include "Application/app.h"
#include "uUdpCommHandler.h"
TudpCommHandler udpSpike(userStruct);

int main()
{		
    unitTest::run();
    for (;;){
        TtaskHandler::handleEvents();
    }
}
