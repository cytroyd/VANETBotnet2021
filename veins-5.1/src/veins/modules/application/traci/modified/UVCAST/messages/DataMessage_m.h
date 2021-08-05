//
// Generated file, do not edit! Created by nedtool 5.6 from veins/modules/application/traci/modified/UVCAST/messages/DataMessage.msg.
//

#ifndef __VEINS_DATAMESSAGE_M_H
#define __VEINS_DATAMESSAGE_M_H

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

// cplusplus {{
#include "veins/base/utils/Coord.h"
#include "veins/modules/messages/BaseFrame1609_4_m.h"
#include "veins/base/utils/SimpleAddress.h"
// }}


namespace veins {

/**
 * Class generated from <tt>veins/modules/application/traci/modified/UVCAST/messages/DataMessage.msg:28</tt> by nedtool.
 * <pre>
 * packet DataMessage extends BaseFrame1609_4
 * {
 *     Coord messageOriginPosition;
 *     double messageROI;
 *     simtime_t messageOriginTime;
 *     simtime_t messageTTL;
 *     int hops;
 * 
 *     bool sentSCFState = false;
 * }
 * </pre>
 */
class VEINS_API DataMessage : public ::veins::BaseFrame1609_4
{
  protected:
    Coord messageOriginPosition;
    double messageROI;
    ::omnetpp::simtime_t messageOriginTime;
    ::omnetpp::simtime_t messageTTL;
    int hops;
    bool sentSCFState;

  private:
    void copy(const DataMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DataMessage&);

  public:
    DataMessage(const char *name=nullptr, short kind=0);
    DataMessage(const DataMessage& other);
    virtual ~DataMessage();
    DataMessage& operator=(const DataMessage& other);
    virtual DataMessage *dup() const override {return new DataMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual Coord& getMessageOriginPosition();
    virtual const Coord& getMessageOriginPosition() const {return const_cast<DataMessage*>(this)->getMessageOriginPosition();}
    virtual void setMessageOriginPosition(const Coord& messageOriginPosition);
    virtual double getMessageROI() const;
    virtual void setMessageROI(double messageROI);
    virtual ::omnetpp::simtime_t getMessageOriginTime() const;
    virtual void setMessageOriginTime(::omnetpp::simtime_t messageOriginTime);
    virtual ::omnetpp::simtime_t getMessageTTL() const;
    virtual void setMessageTTL(::omnetpp::simtime_t messageTTL);
    virtual int getHops() const;
    virtual void setHops(int hops);
    virtual bool getSentSCFState() const;
    virtual void setSentSCFState(bool sentSCFState);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const DataMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, DataMessage& obj) {obj.parsimUnpack(b);}

} // namespace veins

#endif // ifndef __VEINS_DATAMESSAGE_M_H

