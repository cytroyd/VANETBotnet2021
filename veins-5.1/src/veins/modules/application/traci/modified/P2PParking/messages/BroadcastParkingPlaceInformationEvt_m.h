//
// Generated file, do not edit! Created by nedtool 5.6 from veins/modules/application/traci/modified/P2PParking/messages/BroadcastParkingPlaceInformationEvt.msg.
//

#ifndef __BROADCASTPARKINGPLACEINFORMATIONEVT_M_H
#define __BROADCASTPARKINGPLACEINFORMATIONEVT_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef VEINS_API
#  if defined(VEINS_EXPORT)
#    define VEINS_API  OPP_DLLEXPORT
#  elif defined(VEINS_IMPORT)
#    define VEINS_API  OPP_DLLIMPORT
#  else
#    define VEINS_API
#  endif
#endif



/**
 * Class generated from <tt>veins/modules/application/traci/modified/P2PParking/messages/BroadcastParkingPlaceInformationEvt.msg:16</tt> by nedtool.
 * <pre>
 * message BroadcastParkingPlaceInformationEvt
 * {
 * }
 * </pre>
 */
class VEINS_API BroadcastParkingPlaceInformationEvt : public ::omnetpp::cMessage
{
  protected:

  private:
    void copy(const BroadcastParkingPlaceInformationEvt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BroadcastParkingPlaceInformationEvt&);

  public:
    BroadcastParkingPlaceInformationEvt(const char *name=nullptr, short kind=0);
    BroadcastParkingPlaceInformationEvt(const BroadcastParkingPlaceInformationEvt& other);
    virtual ~BroadcastParkingPlaceInformationEvt();
    BroadcastParkingPlaceInformationEvt& operator=(const BroadcastParkingPlaceInformationEvt& other);
    virtual BroadcastParkingPlaceInformationEvt *dup() const override {return new BroadcastParkingPlaceInformationEvt(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BroadcastParkingPlaceInformationEvt& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BroadcastParkingPlaceInformationEvt& obj) {obj.parsimUnpack(b);}


#endif // ifndef __BROADCASTPARKINGPLACEINFORMATIONEVT_M_H

