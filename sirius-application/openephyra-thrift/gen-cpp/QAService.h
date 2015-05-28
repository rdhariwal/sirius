/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef QAService_H
#define QAService_H

#include <thrift/TDispatchProcessor.h>
#include "qaservice_types.h"

namespace qastubs {

class QAServiceIf {
 public:
  virtual ~QAServiceIf() {}
  virtual void askFactoidThrift(std::string& _return, const std::string& question) = 0;
};

class QAServiceIfFactory {
 public:
  typedef QAServiceIf Handler;

  virtual ~QAServiceIfFactory() {}

  virtual QAServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(QAServiceIf* /* handler */) = 0;
};

class QAServiceIfSingletonFactory : virtual public QAServiceIfFactory {
 public:
  QAServiceIfSingletonFactory(const boost::shared_ptr<QAServiceIf>& iface) : iface_(iface) {}
  virtual ~QAServiceIfSingletonFactory() {}

  virtual QAServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(QAServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<QAServiceIf> iface_;
};

class QAServiceNull : virtual public QAServiceIf {
 public:
  virtual ~QAServiceNull() {}
  void askFactoidThrift(std::string& /* _return */, const std::string& /* question */) {
    return;
  }
};

typedef struct _QAService_askFactoidThrift_args__isset {
  _QAService_askFactoidThrift_args__isset() : question(false) {}
  bool question :1;
} _QAService_askFactoidThrift_args__isset;

class QAService_askFactoidThrift_args {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  QAService_askFactoidThrift_args(const QAService_askFactoidThrift_args&);
  QAService_askFactoidThrift_args& operator=(const QAService_askFactoidThrift_args&);
  QAService_askFactoidThrift_args() : question() {
  }

  virtual ~QAService_askFactoidThrift_args() throw();
  std::string question;

  _QAService_askFactoidThrift_args__isset __isset;

  void __set_question(const std::string& val);

  bool operator == (const QAService_askFactoidThrift_args & rhs) const
  {
    if (!(question == rhs.question))
      return false;
    return true;
  }
  bool operator != (const QAService_askFactoidThrift_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const QAService_askFactoidThrift_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const QAService_askFactoidThrift_args& obj);
};


class QAService_askFactoidThrift_pargs {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};


  virtual ~QAService_askFactoidThrift_pargs() throw();
  const std::string* question;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const QAService_askFactoidThrift_pargs& obj);
};

typedef struct _QAService_askFactoidThrift_result__isset {
  _QAService_askFactoidThrift_result__isset() : success(false) {}
  bool success :1;
} _QAService_askFactoidThrift_result__isset;

class QAService_askFactoidThrift_result {
 public:

  static const char* ascii_fingerprint; // = "9A73381FEFD6B67F432E717102246330";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x73,0x38,0x1F,0xEF,0xD6,0xB6,0x7F,0x43,0x2E,0x71,0x71,0x02,0x24,0x63,0x30};

  QAService_askFactoidThrift_result(const QAService_askFactoidThrift_result&);
  QAService_askFactoidThrift_result& operator=(const QAService_askFactoidThrift_result&);
  QAService_askFactoidThrift_result() : success() {
  }

  virtual ~QAService_askFactoidThrift_result() throw();
  std::string success;

  _QAService_askFactoidThrift_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const QAService_askFactoidThrift_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const QAService_askFactoidThrift_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const QAService_askFactoidThrift_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const QAService_askFactoidThrift_result& obj);
};

typedef struct _QAService_askFactoidThrift_presult__isset {
  _QAService_askFactoidThrift_presult__isset() : success(false) {}
  bool success :1;
} _QAService_askFactoidThrift_presult__isset;

class QAService_askFactoidThrift_presult {
 public:

  static const char* ascii_fingerprint; // = "9A73381FEFD6B67F432E717102246330";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x73,0x38,0x1F,0xEF,0xD6,0xB6,0x7F,0x43,0x2E,0x71,0x71,0x02,0x24,0x63,0x30};


  virtual ~QAService_askFactoidThrift_presult() throw();
  std::string* success;

  _QAService_askFactoidThrift_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const QAService_askFactoidThrift_presult& obj);
};

class QAServiceClient : virtual public QAServiceIf {
 public:
  QAServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  QAServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void askFactoidThrift(std::string& _return, const std::string& question);
  void send_askFactoidThrift(const std::string& question);
  void recv_askFactoidThrift(std::string& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class QAServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<QAServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (QAServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_askFactoidThrift(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  QAServiceProcessor(boost::shared_ptr<QAServiceIf> iface) :
    iface_(iface) {
    processMap_["askFactoidThrift"] = &QAServiceProcessor::process_askFactoidThrift;
  }

  virtual ~QAServiceProcessor() {}
};

class QAServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  QAServiceProcessorFactory(const ::boost::shared_ptr< QAServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< QAServiceIfFactory > handlerFactory_;
};

class QAServiceMultiface : virtual public QAServiceIf {
 public:
  QAServiceMultiface(std::vector<boost::shared_ptr<QAServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~QAServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<QAServiceIf> > ifaces_;
  QAServiceMultiface() {}
  void add(boost::shared_ptr<QAServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void askFactoidThrift(std::string& _return, const std::string& question) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->askFactoidThrift(_return, question);
    }
    ifaces_[i]->askFactoidThrift(_return, question);
    return;
  }

};

} // namespace

#endif