//
// Generated file, do not edit! Created by nedtool 5.6 from veins/modules/application/traci/modified/P2PCongestionAvoidance/Messages/CongestionInfoStruct.msg.
//

#ifndef __VEINS_CONGESTIONINFOSTRUCT_M_H
#define __VEINS_CONGESTIONINFOSTRUCT_M_H

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
#include "veins/modules/messages/BaseFrame1609_4_m.h"
#include "veins/base/utils/Coord.h"
// }}


namespace veins {

/**
 * Class generated from <tt>veins/modules/application/traci/modified/P2PCongestionAvoidance/Messages/CongestionInfoStruct.msg:31</tt> by nedtool.
 * <pre>
 * packet CongestionInfoStruct extends BaseFrame1609_4
 * {
 *     simtime_t timestamp;                      // timestamp
 *     string edgeID;                            // edgeID
 *     int carID;							      // carID
 *     double averageSpeed;                  // avg speed of all cars
 * }
 * </pre>
 */
class VEINS_API CongestionInfoStruct : public ::veins::BaseFrame1609_4
{
  protected:
    ::omnetpp::simtime_t timestamp;
    ::omnetpp::opp_string edgeID;
    int carID;
    double averageSpeed;

  private:
    void copy(const CongestionInfoStruct& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CongestionInfoStruct&);

  public:
    CongestionInfoStruct();
    CongestionInfoStruct(const CongestionInfoStruct& other);
    virtual ~CongestionInfoStruct();
    CongestionInfoStruct& operator=(const CongestionInfoStruct& other);
    virtual CongestionInfoStruct *dup() const override {return new CongestionInfoStruct(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual ::omnetpp::simtime_t getTimestamp() const;
    virtual void setTimestamp(::omnetpp::simtime_t timestamp);
    virtual const char * getEdgeID() const;
    virtual void setEdgeID(const char * edgeID);
    virtual int getCarID() const;
    virtual void setCarID(int carID);
    virtual double getAverageSpeed() const;
    virtual void setAverageSpeed(double averageSpeed);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CongestionInfoStruct& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CongestionInfoStruct& obj) {obj.parsimUnpack(b);}

} // namespace veins

#endif // ifndef __VEINS_CONGESTIONINFOSTRUCT_M_H

