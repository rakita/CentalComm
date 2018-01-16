#ifndef CENTRALCOMM_H
#define CENTRALCOMM_H

namespace dr
{

class CentralComm
{
public:
    CentralComm();

    void Subscribe();
    void UnSubscribe();
    void SendEvent(int eventType);

    void Register();
    void SendOrder();
    int SendQueue();

private:
    void run();


};

}
#endif // CENTRALCOMM_H
