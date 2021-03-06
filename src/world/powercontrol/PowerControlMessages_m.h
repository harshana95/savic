//
// Generated file, do not edit! Created by opp_msgc 4.3 from world/powercontrol/PowerControlMessages.msg.
//

#ifndef _POWERCONTROLMESSAGES_M_H_
#define _POWERCONTROLMESSAGES_M_H_

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



/**
 * Class generated from <tt>world/powercontrol/PowerControlMessages.msg</tt> by opp_msgc.
 * <pre>
 * message PowerControlMessage
 * {
 *     int moduleId;
 * };
 * </pre>
 */
class INET_API PowerControlMessage : public ::cMessage
{
  protected:
    int moduleId_var;

  private:
    void copy(const PowerControlMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PowerControlMessage&);

  public:
    PowerControlMessage(const char *name=NULL, int kind=0);
    PowerControlMessage(const PowerControlMessage& other);
    virtual ~PowerControlMessage();
    PowerControlMessage& operator=(const PowerControlMessage& other);
    virtual PowerControlMessage *dup() const {return new PowerControlMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getModuleId() const;
    virtual void setModuleId(int moduleId);
};

inline void doPacking(cCommBuffer *b, PowerControlMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PowerControlMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>world/powercontrol/PowerControlMessages.msg</tt> by opp_msgc.
 * <pre>
 * message EnableModuleMessage extends PowerControlMessage
 * {
 * };
 * </pre>
 */
class INET_API EnableModuleMessage : public ::PowerControlMessage
{
  protected:

  private:
    void copy(const EnableModuleMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EnableModuleMessage&);

  public:
    EnableModuleMessage(const char *name=NULL, int kind=0);
    EnableModuleMessage(const EnableModuleMessage& other);
    virtual ~EnableModuleMessage();
    EnableModuleMessage& operator=(const EnableModuleMessage& other);
    virtual EnableModuleMessage *dup() const {return new EnableModuleMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, EnableModuleMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EnableModuleMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>world/powercontrol/PowerControlMessages.msg</tt> by opp_msgc.
 * <pre>
 * message DisableModuleMessage extends PowerControlMessage
 * {
 * };
 * </pre>
 */
class INET_API DisableModuleMessage : public ::PowerControlMessage
{
  protected:

  private:
    void copy(const DisableModuleMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DisableModuleMessage&);

  public:
    DisableModuleMessage(const char *name=NULL, int kind=0);
    DisableModuleMessage(const DisableModuleMessage& other);
    virtual ~DisableModuleMessage();
    DisableModuleMessage& operator=(const DisableModuleMessage& other);
    virtual DisableModuleMessage *dup() const {return new DisableModuleMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, DisableModuleMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DisableModuleMessage& obj) {obj.parsimUnpack(b);}


#endif // _POWERCONTROLMESSAGES_M_H_
