//
// Generated file, do not edit! Created by opp_msgc 4.3 from base/ByteArrayMessage.msg.
//

#ifndef _BYTEARRAYMESSAGE_M_H_
#define _BYTEARRAYMESSAGE_M_H_

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
#include "INETDefs.h"

#include "ByteArray.h"
// }}



/**
 * Class generated from <tt>base/ByteArrayMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet ByteArrayMessage
 * {
 *     @customize(true);
 *     ByteArray byteArray;
 * }
 * </pre>
 *
 * ByteArrayMessage_Base is only useful if it gets subclassed, and ByteArrayMessage is derived from it.
 * The minimum code to be written for ByteArrayMessage is the following:
 *
 * <pre>
 * class INET_API ByteArrayMessage : public ByteArrayMessage_Base
 * {
 *   private:
 *     void copy(const ByteArrayMessage& other) { ... }

 *   public:
 *     ByteArrayMessage(const char *name=NULL, int kind=0) : ByteArrayMessage_Base(name,kind) {}
 *     ByteArrayMessage(const ByteArrayMessage& other) : ByteArrayMessage_Base(other) {copy(other);}
 *     ByteArrayMessage& operator=(const ByteArrayMessage& other) {if (this==&other) return *this; ByteArrayMessage_Base::operator=(other); copy(other); return *this;}
 *     virtual ByteArrayMessage *dup() const {return new ByteArrayMessage(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from ByteArrayMessage_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(ByteArrayMessage);
 * </pre>
 */
class INET_API ByteArrayMessage_Base : public ::cPacket
{
  protected:
    ByteArray byteArray_var;

  private:
    void copy(const ByteArrayMessage_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ByteArrayMessage_Base&);
    // make constructors protected to avoid instantiation
    ByteArrayMessage_Base(const char *name=NULL, int kind=0);
    ByteArrayMessage_Base(const ByteArrayMessage_Base& other);
    // make assignment operator protected to force the user override it
    ByteArrayMessage_Base& operator=(const ByteArrayMessage_Base& other);

  public:
    virtual ~ByteArrayMessage_Base();
    virtual ByteArrayMessage_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class ByteArrayMessage");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual ByteArray& getByteArray();
    virtual const ByteArray& getByteArray() const {return const_cast<ByteArrayMessage_Base*>(this)->getByteArray();}
    virtual void setByteArray(const ByteArray& byteArray);
};


#endif // _BYTEARRAYMESSAGE_M_H_