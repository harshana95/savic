//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/icmpv6/IPv6NDMessage.msg.
//

#ifndef _IPV6NDMESSAGE_M_H_
#define _IPV6NDMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API 
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API 
#  endif
#endif

// cplusplus {{
#include "ICMPv6Message_m.h"
#include "IPv6Address.h"
#include "MACAddress.h"
// }}



/**
 * Class generated from <tt>networklayer/icmpv6/IPv6NDMessage.msg</tt> by opp_msgc.
 * <pre>
 * class IPv6NDPrefixInformation
 * {
 *     unsigned short prefixLength;
 *     bool onlinkFlag;        
 *     bool autoAddressConfFlag;    
 *     bool routerAddressFlag;        
 *     unsigned int validLifetime;    
 *     unsigned int preferredLifetime;    
 *     IPv6Address prefix;
 * }
 * </pre>
 */
class INET_API IPv6NDPrefixInformation : public ::cObject
{
  protected:
    unsigned short prefixLength_var;
    bool onlinkFlag_var;
    bool autoAddressConfFlag_var;
    bool routerAddressFlag_var;
    unsigned int validLifetime_var;
    unsigned int preferredLifetime_var;
    IPv6Address prefix_var;

  private:
    void copy(const IPv6NDPrefixInformation& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6NDPrefixInformation&);

  public:
    IPv6NDPrefixInformation();
    IPv6NDPrefixInformation(const IPv6NDPrefixInformation& other);
    virtual ~IPv6NDPrefixInformation();
    IPv6NDPrefixInformation& operator=(const IPv6NDPrefixInformation& other);
    virtual IPv6NDPrefixInformation *dup() const {return new IPv6NDPrefixInformation(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned short getPrefixLength() const;
    virtual void setPrefixLength(unsigned short prefixLength);
    virtual bool getOnlinkFlag() const;
    virtual void setOnlinkFlag(bool onlinkFlag);
    virtual bool getAutoAddressConfFlag() const;
    virtual void setAutoAddressConfFlag(bool autoAddressConfFlag);
    virtual bool getRouterAddressFlag() const;
    virtual void setRouterAddressFlag(bool routerAddressFlag);
    virtual unsigned int getValidLifetime() const;
    virtual void setValidLifetime(unsigned int validLifetime);
    virtual unsigned int getPreferredLifetime() const;
    virtual void setPreferredLifetime(unsigned int preferredLifetime);
    virtual IPv6Address& getPrefix();
    virtual const IPv6Address& getPrefix() const {return const_cast<IPv6NDPrefixInformation*>(this)->getPrefix();}
    virtual void setPrefix(const IPv6Address& prefix);
};

inline void doPacking(cCommBuffer *b, IPv6NDPrefixInformation& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv6NDPrefixInformation& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/IPv6NDMessage.msg</tt> by opp_msgc.
 * <pre>
 * class MIPv6NDAdvertisementInterval
 * {
 *     unsigned int advertisementInterval;    
 * }
 * </pre>
 */
class INET_API MIPv6NDAdvertisementInterval : public ::cObject
{
  protected:
    unsigned int advertisementInterval_var;

  private:
    void copy(const MIPv6NDAdvertisementInterval& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MIPv6NDAdvertisementInterval&);

  public:
    MIPv6NDAdvertisementInterval();
    MIPv6NDAdvertisementInterval(const MIPv6NDAdvertisementInterval& other);
    virtual ~MIPv6NDAdvertisementInterval();
    MIPv6NDAdvertisementInterval& operator=(const MIPv6NDAdvertisementInterval& other);
    virtual MIPv6NDAdvertisementInterval *dup() const {return new MIPv6NDAdvertisementInterval(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getAdvertisementInterval() const;
    virtual void setAdvertisementInterval(unsigned int advertisementInterval);
};

inline void doPacking(cCommBuffer *b, MIPv6NDAdvertisementInterval& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MIPv6NDAdvertisementInterval& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/IPv6NDMessage.msg</tt> by opp_msgc.
 * <pre>
 * class MIPv6HAInformation
 * {
 *     unsigned int homeAgentPreference;
 *     unsigned int homeAgentLifetime;    
 * }
 * </pre>
 */
class INET_API MIPv6HAInformation : public ::cObject
{
  protected:
    unsigned int homeAgentPreference_var;
    unsigned int homeAgentLifetime_var;

  private:
    void copy(const MIPv6HAInformation& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MIPv6HAInformation&);

  public:
    MIPv6HAInformation();
    MIPv6HAInformation(const MIPv6HAInformation& other);
    virtual ~MIPv6HAInformation();
    MIPv6HAInformation& operator=(const MIPv6HAInformation& other);
    virtual MIPv6HAInformation *dup() const {return new MIPv6HAInformation(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getHomeAgentPreference() const;
    virtual void setHomeAgentPreference(unsigned int homeAgentPreference);
    virtual unsigned int getHomeAgentLifetime() const;
    virtual void setHomeAgentLifetime(unsigned int homeAgentLifetime);
};

inline void doPacking(cCommBuffer *b, MIPv6HAInformation& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MIPv6HAInformation& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/IPv6NDMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet IPv6NDMessage extends ICMPv6Message
 * {
 *     
 *     int code = 0;
 * }
 * </pre>
 */
class INET_API IPv6NDMessage : public ::ICMPv6Message
{
  protected:
    int code_var;

  private:
    void copy(const IPv6NDMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6NDMessage&);

  public:
    IPv6NDMessage(const char *name=NULL, int kind=0);
    IPv6NDMessage(const IPv6NDMessage& other);
    virtual ~IPv6NDMessage();
    IPv6NDMessage& operator=(const IPv6NDMessage& other);
    virtual IPv6NDMessage *dup() const {return new IPv6NDMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getCode() const;
    virtual void setCode(int code);
};

inline void doPacking(cCommBuffer *b, IPv6NDMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv6NDMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/IPv6NDMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet IPv6RouterSolicitation extends IPv6NDMessage
 * {
 *     
 *     MACAddress sourceLinkLayerAddress;
 * }
 * </pre>
 */
class INET_API IPv6RouterSolicitation : public ::IPv6NDMessage
{
  protected:
    MACAddress sourceLinkLayerAddress_var;

  private:
    void copy(const IPv6RouterSolicitation& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6RouterSolicitation&);

  public:
    IPv6RouterSolicitation(const char *name=NULL, int kind=0);
    IPv6RouterSolicitation(const IPv6RouterSolicitation& other);
    virtual ~IPv6RouterSolicitation();
    IPv6RouterSolicitation& operator=(const IPv6RouterSolicitation& other);
    virtual IPv6RouterSolicitation *dup() const {return new IPv6RouterSolicitation(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getSourceLinkLayerAddress();
    virtual const MACAddress& getSourceLinkLayerAddress() const {return const_cast<IPv6RouterSolicitation*>(this)->getSourceLinkLayerAddress();}
    virtual void setSourceLinkLayerAddress(const MACAddress& sourceLinkLayerAddress);
};

inline void doPacking(cCommBuffer *b, IPv6RouterSolicitation& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv6RouterSolicitation& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/IPv6NDMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet IPv6RouterAdvertisement extends IPv6NDMessage
 * {
 *     
 *     unsigned short curHopLimit;
 *     bool managedAddrConfFlag;    
 *     bool otherStatefulConfFlag;    
 *     bool homeAgentFlag = false;        
 *     unsigned short routerLifetime;  
 *     unsigned int reachableTime;
 *     unsigned int retransTimer;
 * 
 *     
 *     MACAddress sourceLinkLayerAddress;        
 *     unsigned int MTU;                
 *     IPv6NDPrefixInformation prefixInformation[];    
 *     MIPv6NDAdvertisementInterval advInterval;    
 *     MIPv6HAInformation haInformation;    
 * }
 * </pre>
 */
class INET_API IPv6RouterAdvertisement : public ::IPv6NDMessage
{
  protected:
    unsigned short curHopLimit_var;
    bool managedAddrConfFlag_var;
    bool otherStatefulConfFlag_var;
    bool homeAgentFlag_var;
    unsigned short routerLifetime_var;
    unsigned int reachableTime_var;
    unsigned int retransTimer_var;
    MACAddress sourceLinkLayerAddress_var;
    unsigned int MTU_var;
    IPv6NDPrefixInformation *prefixInformation_var; // array ptr
    unsigned int prefixInformation_arraysize;
    MIPv6NDAdvertisementInterval advInterval_var;
    MIPv6HAInformation haInformation_var;

  private:
    void copy(const IPv6RouterAdvertisement& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6RouterAdvertisement&);

  public:
    IPv6RouterAdvertisement(const char *name=NULL, int kind=0);
    IPv6RouterAdvertisement(const IPv6RouterAdvertisement& other);
    virtual ~IPv6RouterAdvertisement();
    IPv6RouterAdvertisement& operator=(const IPv6RouterAdvertisement& other);
    virtual IPv6RouterAdvertisement *dup() const {return new IPv6RouterAdvertisement(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned short getCurHopLimit() const;
    virtual void setCurHopLimit(unsigned short curHopLimit);
    virtual bool getManagedAddrConfFlag() const;
    virtual void setManagedAddrConfFlag(bool managedAddrConfFlag);
    virtual bool getOtherStatefulConfFlag() const;
    virtual void setOtherStatefulConfFlag(bool otherStatefulConfFlag);
    virtual bool getHomeAgentFlag() const;
    virtual void setHomeAgentFlag(bool homeAgentFlag);
    virtual unsigned short getRouterLifetime() const;
    virtual void setRouterLifetime(unsigned short routerLifetime);
    virtual unsigned int getReachableTime() const;
    virtual void setReachableTime(unsigned int reachableTime);
    virtual unsigned int getRetransTimer() const;
    virtual void setRetransTimer(unsigned int retransTimer);
    virtual MACAddress& getSourceLinkLayerAddress();
    virtual const MACAddress& getSourceLinkLayerAddress() const {return const_cast<IPv6RouterAdvertisement*>(this)->getSourceLinkLayerAddress();}
    virtual void setSourceLinkLayerAddress(const MACAddress& sourceLinkLayerAddress);
    virtual unsigned int getMTU() const;
    virtual void setMTU(unsigned int MTU);
    virtual void setPrefixInformationArraySize(unsigned int size);
    virtual unsigned int getPrefixInformationArraySize() const;
    virtual IPv6NDPrefixInformation& getPrefixInformation(unsigned int k);
    virtual const IPv6NDPrefixInformation& getPrefixInformation(unsigned int k) const {return const_cast<IPv6RouterAdvertisement*>(this)->getPrefixInformation(k);}
    virtual void setPrefixInformation(unsigned int k, const IPv6NDPrefixInformation& prefixInformation);
    virtual MIPv6NDAdvertisementInterval& getAdvInterval();
    virtual const MIPv6NDAdvertisementInterval& getAdvInterval() const {return const_cast<IPv6RouterAdvertisement*>(this)->getAdvInterval();}
    virtual void setAdvInterval(const MIPv6NDAdvertisementInterval& advInterval);
    virtual MIPv6HAInformation& getHaInformation();
    virtual const MIPv6HAInformation& getHaInformation() const {return const_cast<IPv6RouterAdvertisement*>(this)->getHaInformation();}
    virtual void setHaInformation(const MIPv6HAInformation& haInformation);
};

inline void doPacking(cCommBuffer *b, IPv6RouterAdvertisement& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv6RouterAdvertisement& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/IPv6NDMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet IPv6NeighbourSolicitation extends IPv6NDMessage
 * {
 *     
 *     IPv6Address targetAddress;
 * 
 *     
 *     MACAddress sourceLinkLayerAddress;
 * }
 * </pre>
 */
class INET_API IPv6NeighbourSolicitation : public ::IPv6NDMessage
{
  protected:
    IPv6Address targetAddress_var;
    MACAddress sourceLinkLayerAddress_var;

  private:
    void copy(const IPv6NeighbourSolicitation& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6NeighbourSolicitation&);

  public:
    IPv6NeighbourSolicitation(const char *name=NULL, int kind=0);
    IPv6NeighbourSolicitation(const IPv6NeighbourSolicitation& other);
    virtual ~IPv6NeighbourSolicitation();
    IPv6NeighbourSolicitation& operator=(const IPv6NeighbourSolicitation& other);
    virtual IPv6NeighbourSolicitation *dup() const {return new IPv6NeighbourSolicitation(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv6Address& getTargetAddress();
    virtual const IPv6Address& getTargetAddress() const {return const_cast<IPv6NeighbourSolicitation*>(this)->getTargetAddress();}
    virtual void setTargetAddress(const IPv6Address& targetAddress);
    virtual MACAddress& getSourceLinkLayerAddress();
    virtual const MACAddress& getSourceLinkLayerAddress() const {return const_cast<IPv6NeighbourSolicitation*>(this)->getSourceLinkLayerAddress();}
    virtual void setSourceLinkLayerAddress(const MACAddress& sourceLinkLayerAddress);
};

inline void doPacking(cCommBuffer *b, IPv6NeighbourSolicitation& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv6NeighbourSolicitation& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/IPv6NDMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet IPv6NeighbourAdvertisement extends IPv6NDMessage
 * {
 *     
 *     bool routerFlag;    
 *     bool solicitedFlag;    
 *     bool overrideFlag;    
 *     IPv6Address targetAddress;
 * 
 *     
 *     MACAddress targetLinkLayerAddress;    
 * }
 * </pre>
 */
class INET_API IPv6NeighbourAdvertisement : public ::IPv6NDMessage
{
  protected:
    bool routerFlag_var;
    bool solicitedFlag_var;
    bool overrideFlag_var;
    IPv6Address targetAddress_var;
    MACAddress targetLinkLayerAddress_var;

  private:
    void copy(const IPv6NeighbourAdvertisement& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6NeighbourAdvertisement&);

  public:
    IPv6NeighbourAdvertisement(const char *name=NULL, int kind=0);
    IPv6NeighbourAdvertisement(const IPv6NeighbourAdvertisement& other);
    virtual ~IPv6NeighbourAdvertisement();
    IPv6NeighbourAdvertisement& operator=(const IPv6NeighbourAdvertisement& other);
    virtual IPv6NeighbourAdvertisement *dup() const {return new IPv6NeighbourAdvertisement(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getRouterFlag() const;
    virtual void setRouterFlag(bool routerFlag);
    virtual bool getSolicitedFlag() const;
    virtual void setSolicitedFlag(bool solicitedFlag);
    virtual bool getOverrideFlag() const;
    virtual void setOverrideFlag(bool overrideFlag);
    virtual IPv6Address& getTargetAddress();
    virtual const IPv6Address& getTargetAddress() const {return const_cast<IPv6NeighbourAdvertisement*>(this)->getTargetAddress();}
    virtual void setTargetAddress(const IPv6Address& targetAddress);
    virtual MACAddress& getTargetLinkLayerAddress();
    virtual const MACAddress& getTargetLinkLayerAddress() const {return const_cast<IPv6NeighbourAdvertisement*>(this)->getTargetLinkLayerAddress();}
    virtual void setTargetLinkLayerAddress(const MACAddress& targetLinkLayerAddress);
};

inline void doPacking(cCommBuffer *b, IPv6NeighbourAdvertisement& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv6NeighbourAdvertisement& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/IPv6NDMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet IPv6Redirect extends IPv6NDMessage
 * {
 *     
 *     IPv6Address targetAddress;
 *     IPv6Address destinationAddress;
 * 
 *     
 *     MACAddress targetLinkLayerAddress;
 *         
 * }
 * </pre>
 */
class INET_API IPv6Redirect : public ::IPv6NDMessage
{
  protected:
    IPv6Address targetAddress_var;
    IPv6Address destinationAddress_var;
    MACAddress targetLinkLayerAddress_var;

  private:
    void copy(const IPv6Redirect& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6Redirect&);

  public:
    IPv6Redirect(const char *name=NULL, int kind=0);
    IPv6Redirect(const IPv6Redirect& other);
    virtual ~IPv6Redirect();
    IPv6Redirect& operator=(const IPv6Redirect& other);
    virtual IPv6Redirect *dup() const {return new IPv6Redirect(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv6Address& getTargetAddress();
    virtual const IPv6Address& getTargetAddress() const {return const_cast<IPv6Redirect*>(this)->getTargetAddress();}
    virtual void setTargetAddress(const IPv6Address& targetAddress);
    virtual IPv6Address& getDestinationAddress();
    virtual const IPv6Address& getDestinationAddress() const {return const_cast<IPv6Redirect*>(this)->getDestinationAddress();}
    virtual void setDestinationAddress(const IPv6Address& destinationAddress);
    virtual MACAddress& getTargetLinkLayerAddress();
    virtual const MACAddress& getTargetLinkLayerAddress() const {return const_cast<IPv6Redirect*>(this)->getTargetLinkLayerAddress();}
    virtual void setTargetLinkLayerAddress(const MACAddress& targetLinkLayerAddress);
};

inline void doPacking(cCommBuffer *b, IPv6Redirect& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv6Redirect& obj) {obj.parsimUnpack(b);}


#endif // _IPV6NDMESSAGE_M_H_
