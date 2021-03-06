// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: identity.capnp

#ifndef CAPNP_INCLUDED_c822108a5c3d7d25_
#define CAPNP_INCLUDED_c822108a5c3d7d25_

#include <capnp/generated-header-support.h>
#if !CAPNP_LITE
#include <capnp/capability.h>
#endif  // !CAPNP_LITE

#if CAPNP_VERSION != 6000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "util.capnp.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(c084987aa951dd18);
CAPNP_DECLARE_SCHEMA(f32d79a7b575d94c);
CAPNP_DECLARE_SCHEMA(cd7272b855c92f6d);
CAPNP_DECLARE_SCHEMA(d3d0c34d7201fcef);
CAPNP_DECLARE_SCHEMA(84752dcf8539ab01);
enum class Pronouns_84752dcf8539ab01: uint16_t {
  NEUTRAL,
  MALE,
  FEMALE,
  ROBOT,
};
CAPNP_DECLARE_ENUM(Pronouns, 84752dcf8539ab01);
CAPNP_DECLARE_SCHEMA(94b9d1efb35d11d3);

}  // namespace schemas
}  // namespace capnp

namespace sandstorm {

struct Identity {
  Identity() = delete;

#if !CAPNP_LITE
  class Client;
  class Server;
#endif  // !CAPNP_LITE

  struct GetProfileParams;
  struct GetProfileResults;

  #if !CAPNP_LITE
  struct _capnpPrivate {
    CAPNP_DECLARE_INTERFACE_HEADER(c084987aa951dd18)
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
  };
  #endif  // !CAPNP_LITE
};

struct Identity::GetProfileParams {
  GetProfileParams() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f32d79a7b575d94c, 0, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

struct Identity::GetProfileResults {
  GetProfileResults() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(cd7272b855c92f6d, 0, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

struct Profile {
  Profile() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  typedef ::capnp::schemas::Pronouns_84752dcf8539ab01 Pronouns;


  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(d3d0c34d7201fcef, 1, 3)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

struct UserInfo {
  UserInfo() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(94b9d1efb35d11d3, 1, 7)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

#if !CAPNP_LITE
class Identity::Client
    : public virtual ::capnp::Capability::Client {
public:
  typedef Identity Calls;
  typedef Identity Reads;

  Client(decltype(nullptr));
  explicit Client(::kj::Own< ::capnp::ClientHook>&& hook);
  template <typename _t, typename = ::kj::EnableIf< ::kj::canConvert<_t*, Server*>()>>
  Client(::kj::Own<_t>&& server);
  template <typename _t, typename = ::kj::EnableIf< ::kj::canConvert<_t*, Client*>()>>
  Client(::kj::Promise<_t>&& promise);
  Client(::kj::Exception&& exception);
  Client(Client&) = default;
  Client(Client&&) = default;
  Client& operator=(Client& other);
  Client& operator=(Client&& other);

  ::capnp::Request< ::sandstorm::Identity::GetProfileParams,  ::sandstorm::Identity::GetProfileResults> getProfileRequest(
      ::kj::Maybe< ::capnp::MessageSize> sizeHint = nullptr);

protected:
  Client() = default;
};

class Identity::Server
    : public virtual ::capnp::Capability::Server {
public:
  typedef Identity Serves;

  ::kj::Promise<void> dispatchCall(uint64_t interfaceId, uint16_t methodId,
      ::capnp::CallContext< ::capnp::AnyPointer, ::capnp::AnyPointer> context)
      override;

protected:
  typedef  ::sandstorm::Identity::GetProfileParams GetProfileParams;
  typedef  ::sandstorm::Identity::GetProfileResults GetProfileResults;
  typedef ::capnp::CallContext<GetProfileParams, GetProfileResults> GetProfileContext;
  virtual ::kj::Promise<void> getProfile(GetProfileContext context);

  inline  ::sandstorm::Identity::Client thisCap() {
    return ::capnp::Capability::Server::thisCap()
        .template castAs< ::sandstorm::Identity>();
  }

  ::kj::Promise<void> dispatchCallInternal(uint16_t methodId,
      ::capnp::CallContext< ::capnp::AnyPointer, ::capnp::AnyPointer> context);
};
#endif  // !CAPNP_LITE

class Identity::GetProfileParams::Reader {
public:
  typedef GetProfileParams Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Identity::GetProfileParams::Builder {
public:
  typedef GetProfileParams Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Identity::GetProfileParams::Pipeline {
public:
  typedef GetProfileParams Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Identity::GetProfileResults::Reader {
public:
  typedef GetProfileResults Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline bool hasProfile() const;
  inline  ::sandstorm::Profile::Reader getProfile() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Identity::GetProfileResults::Builder {
public:
  typedef GetProfileResults Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasProfile();
  inline  ::sandstorm::Profile::Builder getProfile();
  inline void setProfile( ::sandstorm::Profile::Reader value);
  inline  ::sandstorm::Profile::Builder initProfile();
  inline void adoptProfile(::capnp::Orphan< ::sandstorm::Profile>&& value);
  inline ::capnp::Orphan< ::sandstorm::Profile> disownProfile();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Identity::GetProfileResults::Pipeline {
public:
  typedef GetProfileResults Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::sandstorm::Profile::Pipeline getProfile();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Profile::Reader {
public:
  typedef Profile Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline bool hasDisplayName() const;
  inline  ::sandstorm::LocalizedText::Reader getDisplayName() const;

  inline bool hasPreferredHandle() const;
  inline  ::capnp::Text::Reader getPreferredHandle() const;

  inline bool hasPicture() const;
#if !CAPNP_LITE
  inline  ::sandstorm::StaticAsset::Client getPicture() const;
#endif  // !CAPNP_LITE

  inline  ::sandstorm::Profile::Pronouns getPronouns() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Profile::Builder {
public:
  typedef Profile Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasDisplayName();
  inline  ::sandstorm::LocalizedText::Builder getDisplayName();
  inline void setDisplayName( ::sandstorm::LocalizedText::Reader value);
  inline  ::sandstorm::LocalizedText::Builder initDisplayName();
  inline void adoptDisplayName(::capnp::Orphan< ::sandstorm::LocalizedText>&& value);
  inline ::capnp::Orphan< ::sandstorm::LocalizedText> disownDisplayName();

  inline bool hasPreferredHandle();
  inline  ::capnp::Text::Builder getPreferredHandle();
  inline void setPreferredHandle( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initPreferredHandle(unsigned int size);
  inline void adoptPreferredHandle(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownPreferredHandle();

  inline bool hasPicture();
#if !CAPNP_LITE
  inline  ::sandstorm::StaticAsset::Client getPicture();
  inline void setPicture( ::sandstorm::StaticAsset::Client&& value);
  inline void setPicture( ::sandstorm::StaticAsset::Client& value);
  inline void adoptPicture(::capnp::Orphan< ::sandstorm::StaticAsset>&& value);
  inline ::capnp::Orphan< ::sandstorm::StaticAsset> disownPicture();
#endif  // !CAPNP_LITE

  inline  ::sandstorm::Profile::Pronouns getPronouns();
  inline void setPronouns( ::sandstorm::Profile::Pronouns value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Profile::Pipeline {
public:
  typedef Profile Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::sandstorm::LocalizedText::Pipeline getDisplayName();
  inline  ::sandstorm::StaticAsset::Client getPicture();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class UserInfo::Reader {
public:
  typedef UserInfo Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline bool hasDisplayName() const;
  inline  ::sandstorm::LocalizedText::Reader getDisplayName() const;

  inline bool hasDeprecatedPermissionsBlob() const;
  inline  ::capnp::Data::Reader getDeprecatedPermissionsBlob() const;

  inline bool hasIdentityId() const;
  inline  ::capnp::Data::Reader getIdentityId() const;

  inline bool hasPermissions() const;
  inline  ::capnp::List<bool>::Reader getPermissions() const;

  inline bool hasPreferredHandle() const;
  inline  ::capnp::Text::Reader getPreferredHandle() const;

  inline  ::sandstorm::Profile::Pronouns getPronouns() const;

  inline bool hasPictureUrl() const;
  inline  ::capnp::Text::Reader getPictureUrl() const;

  inline bool hasIdentity() const;
#if !CAPNP_LITE
  inline  ::sandstorm::Identity::Client getIdentity() const;
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class UserInfo::Builder {
public:
  typedef UserInfo Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasDisplayName();
  inline  ::sandstorm::LocalizedText::Builder getDisplayName();
  inline void setDisplayName( ::sandstorm::LocalizedText::Reader value);
  inline  ::sandstorm::LocalizedText::Builder initDisplayName();
  inline void adoptDisplayName(::capnp::Orphan< ::sandstorm::LocalizedText>&& value);
  inline ::capnp::Orphan< ::sandstorm::LocalizedText> disownDisplayName();

  inline bool hasDeprecatedPermissionsBlob();
  inline  ::capnp::Data::Builder getDeprecatedPermissionsBlob();
  inline void setDeprecatedPermissionsBlob( ::capnp::Data::Reader value);
  inline  ::capnp::Data::Builder initDeprecatedPermissionsBlob(unsigned int size);
  inline void adoptDeprecatedPermissionsBlob(::capnp::Orphan< ::capnp::Data>&& value);
  inline ::capnp::Orphan< ::capnp::Data> disownDeprecatedPermissionsBlob();

  inline bool hasIdentityId();
  inline  ::capnp::Data::Builder getIdentityId();
  inline void setIdentityId( ::capnp::Data::Reader value);
  inline  ::capnp::Data::Builder initIdentityId(unsigned int size);
  inline void adoptIdentityId(::capnp::Orphan< ::capnp::Data>&& value);
  inline ::capnp::Orphan< ::capnp::Data> disownIdentityId();

  inline bool hasPermissions();
  inline  ::capnp::List<bool>::Builder getPermissions();
  inline void setPermissions( ::capnp::List<bool>::Reader value);
  inline void setPermissions(::kj::ArrayPtr<const bool> value);
  inline  ::capnp::List<bool>::Builder initPermissions(unsigned int size);
  inline void adoptPermissions(::capnp::Orphan< ::capnp::List<bool>>&& value);
  inline ::capnp::Orphan< ::capnp::List<bool>> disownPermissions();

  inline bool hasPreferredHandle();
  inline  ::capnp::Text::Builder getPreferredHandle();
  inline void setPreferredHandle( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initPreferredHandle(unsigned int size);
  inline void adoptPreferredHandle(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownPreferredHandle();

  inline  ::sandstorm::Profile::Pronouns getPronouns();
  inline void setPronouns( ::sandstorm::Profile::Pronouns value);

  inline bool hasPictureUrl();
  inline  ::capnp::Text::Builder getPictureUrl();
  inline void setPictureUrl( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initPictureUrl(unsigned int size);
  inline void adoptPictureUrl(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownPictureUrl();

  inline bool hasIdentity();
#if !CAPNP_LITE
  inline  ::sandstorm::Identity::Client getIdentity();
  inline void setIdentity( ::sandstorm::Identity::Client&& value);
  inline void setIdentity( ::sandstorm::Identity::Client& value);
  inline void adoptIdentity(::capnp::Orphan< ::sandstorm::Identity>&& value);
  inline ::capnp::Orphan< ::sandstorm::Identity> disownIdentity();
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class UserInfo::Pipeline {
public:
  typedef UserInfo Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::sandstorm::LocalizedText::Pipeline getDisplayName();
  inline  ::sandstorm::Identity::Client getIdentity();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

#if !CAPNP_LITE
inline Identity::Client::Client(decltype(nullptr))
    : ::capnp::Capability::Client(nullptr) {}
inline Identity::Client::Client(
    ::kj::Own< ::capnp::ClientHook>&& hook)
    : ::capnp::Capability::Client(::kj::mv(hook)) {}
template <typename _t, typename>
inline Identity::Client::Client(::kj::Own<_t>&& server)
    : ::capnp::Capability::Client(::kj::mv(server)) {}
template <typename _t, typename>
inline Identity::Client::Client(::kj::Promise<_t>&& promise)
    : ::capnp::Capability::Client(::kj::mv(promise)) {}
inline Identity::Client::Client(::kj::Exception&& exception)
    : ::capnp::Capability::Client(::kj::mv(exception)) {}
inline  ::sandstorm::Identity::Client& Identity::Client::operator=(Client& other) {
  ::capnp::Capability::Client::operator=(other);
  return *this;
}
inline  ::sandstorm::Identity::Client& Identity::Client::operator=(Client&& other) {
  ::capnp::Capability::Client::operator=(kj::mv(other));
  return *this;
}

#endif  // !CAPNP_LITE
inline bool Identity::GetProfileResults::Reader::hasProfile() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool Identity::GetProfileResults::Builder::hasProfile() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::sandstorm::Profile::Reader Identity::GetProfileResults::Reader::getProfile() const {
  return ::capnp::_::PointerHelpers< ::sandstorm::Profile>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::sandstorm::Profile::Builder Identity::GetProfileResults::Builder::getProfile() {
  return ::capnp::_::PointerHelpers< ::sandstorm::Profile>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::sandstorm::Profile::Pipeline Identity::GetProfileResults::Pipeline::getProfile() {
  return  ::sandstorm::Profile::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void Identity::GetProfileResults::Builder::setProfile( ::sandstorm::Profile::Reader value) {
  ::capnp::_::PointerHelpers< ::sandstorm::Profile>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::sandstorm::Profile::Builder Identity::GetProfileResults::Builder::initProfile() {
  return ::capnp::_::PointerHelpers< ::sandstorm::Profile>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Identity::GetProfileResults::Builder::adoptProfile(
    ::capnp::Orphan< ::sandstorm::Profile>&& value) {
  ::capnp::_::PointerHelpers< ::sandstorm::Profile>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::sandstorm::Profile> Identity::GetProfileResults::Builder::disownProfile() {
  return ::capnp::_::PointerHelpers< ::sandstorm::Profile>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool Profile::Reader::hasDisplayName() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool Profile::Builder::hasDisplayName() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::sandstorm::LocalizedText::Reader Profile::Reader::getDisplayName() const {
  return ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::sandstorm::LocalizedText::Builder Profile::Builder::getDisplayName() {
  return ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::sandstorm::LocalizedText::Pipeline Profile::Pipeline::getDisplayName() {
  return  ::sandstorm::LocalizedText::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void Profile::Builder::setDisplayName( ::sandstorm::LocalizedText::Reader value) {
  ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::sandstorm::LocalizedText::Builder Profile::Builder::initDisplayName() {
  return ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Profile::Builder::adoptDisplayName(
    ::capnp::Orphan< ::sandstorm::LocalizedText>&& value) {
  ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::sandstorm::LocalizedText> Profile::Builder::disownDisplayName() {
  return ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool Profile::Reader::hasPreferredHandle() const {
  return !_reader.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline bool Profile::Builder::hasPreferredHandle() {
  return !_builder.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Profile::Reader::getPreferredHandle() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader.getPointerField(1 * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Profile::Builder::getPreferredHandle() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}
inline void Profile::Builder::setPreferredHandle( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder.getPointerField(1 * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Profile::Builder::initPreferredHandle(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder.getPointerField(1 * ::capnp::POINTERS), size);
}
inline void Profile::Builder::adoptPreferredHandle(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder.getPointerField(1 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Profile::Builder::disownPreferredHandle() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}

inline bool Profile::Reader::hasPicture() const {
  return !_reader.getPointerField(2 * ::capnp::POINTERS).isNull();
}
inline bool Profile::Builder::hasPicture() {
  return !_builder.getPointerField(2 * ::capnp::POINTERS).isNull();
}
#if !CAPNP_LITE
inline  ::sandstorm::StaticAsset::Client Profile::Reader::getPicture() const {
  return ::capnp::_::PointerHelpers< ::sandstorm::StaticAsset>::get(
      _reader.getPointerField(2 * ::capnp::POINTERS));
}
inline  ::sandstorm::StaticAsset::Client Profile::Builder::getPicture() {
  return ::capnp::_::PointerHelpers< ::sandstorm::StaticAsset>::get(
      _builder.getPointerField(2 * ::capnp::POINTERS));
}
inline  ::sandstorm::StaticAsset::Client Profile::Pipeline::getPicture() {
  return  ::sandstorm::StaticAsset::Client(_typeless.getPointerField(2).asCap());
}
inline void Profile::Builder::setPicture( ::sandstorm::StaticAsset::Client&& cap) {
  ::capnp::_::PointerHelpers< ::sandstorm::StaticAsset>::set(
      _builder.getPointerField(2 * ::capnp::POINTERS), kj::mv(cap));
}
inline void Profile::Builder::setPicture( ::sandstorm::StaticAsset::Client& cap) {
  ::capnp::_::PointerHelpers< ::sandstorm::StaticAsset>::set(
      _builder.getPointerField(2 * ::capnp::POINTERS), cap);
}
inline void Profile::Builder::adoptPicture(
    ::capnp::Orphan< ::sandstorm::StaticAsset>&& value) {
  ::capnp::_::PointerHelpers< ::sandstorm::StaticAsset>::adopt(
      _builder.getPointerField(2 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::sandstorm::StaticAsset> Profile::Builder::disownPicture() {
  return ::capnp::_::PointerHelpers< ::sandstorm::StaticAsset>::disown(
      _builder.getPointerField(2 * ::capnp::POINTERS));
}
#endif  // !CAPNP_LITE

inline  ::sandstorm::Profile::Pronouns Profile::Reader::getPronouns() const {
  return _reader.getDataField< ::sandstorm::Profile::Pronouns>(
      0 * ::capnp::ELEMENTS);
}

inline  ::sandstorm::Profile::Pronouns Profile::Builder::getPronouns() {
  return _builder.getDataField< ::sandstorm::Profile::Pronouns>(
      0 * ::capnp::ELEMENTS);
}
inline void Profile::Builder::setPronouns( ::sandstorm::Profile::Pronouns value) {
  _builder.setDataField< ::sandstorm::Profile::Pronouns>(
      0 * ::capnp::ELEMENTS, value);
}

inline bool UserInfo::Reader::hasDisplayName() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool UserInfo::Builder::hasDisplayName() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::sandstorm::LocalizedText::Reader UserInfo::Reader::getDisplayName() const {
  return ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::sandstorm::LocalizedText::Builder UserInfo::Builder::getDisplayName() {
  return ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::sandstorm::LocalizedText::Pipeline UserInfo::Pipeline::getDisplayName() {
  return  ::sandstorm::LocalizedText::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void UserInfo::Builder::setDisplayName( ::sandstorm::LocalizedText::Reader value) {
  ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::sandstorm::LocalizedText::Builder UserInfo::Builder::initDisplayName() {
  return ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void UserInfo::Builder::adoptDisplayName(
    ::capnp::Orphan< ::sandstorm::LocalizedText>&& value) {
  ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::sandstorm::LocalizedText> UserInfo::Builder::disownDisplayName() {
  return ::capnp::_::PointerHelpers< ::sandstorm::LocalizedText>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool UserInfo::Reader::hasDeprecatedPermissionsBlob() const {
  return !_reader.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline bool UserInfo::Builder::hasDeprecatedPermissionsBlob() {
  return !_builder.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Data::Reader UserInfo::Reader::getDeprecatedPermissionsBlob() const {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(
      _reader.getPointerField(1 * ::capnp::POINTERS));
}
inline  ::capnp::Data::Builder UserInfo::Builder::getDeprecatedPermissionsBlob() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}
inline void UserInfo::Builder::setDeprecatedPermissionsBlob( ::capnp::Data::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::set(
      _builder.getPointerField(1 * ::capnp::POINTERS), value);
}
inline  ::capnp::Data::Builder UserInfo::Builder::initDeprecatedPermissionsBlob(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::init(
      _builder.getPointerField(1 * ::capnp::POINTERS), size);
}
inline void UserInfo::Builder::adoptDeprecatedPermissionsBlob(
    ::capnp::Orphan< ::capnp::Data>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::adopt(
      _builder.getPointerField(1 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Data> UserInfo::Builder::disownDeprecatedPermissionsBlob() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::disown(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}

inline bool UserInfo::Reader::hasIdentityId() const {
  return !_reader.getPointerField(2 * ::capnp::POINTERS).isNull();
}
inline bool UserInfo::Builder::hasIdentityId() {
  return !_builder.getPointerField(2 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Data::Reader UserInfo::Reader::getIdentityId() const {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(
      _reader.getPointerField(2 * ::capnp::POINTERS));
}
inline  ::capnp::Data::Builder UserInfo::Builder::getIdentityId() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(
      _builder.getPointerField(2 * ::capnp::POINTERS));
}
inline void UserInfo::Builder::setIdentityId( ::capnp::Data::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::set(
      _builder.getPointerField(2 * ::capnp::POINTERS), value);
}
inline  ::capnp::Data::Builder UserInfo::Builder::initIdentityId(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::init(
      _builder.getPointerField(2 * ::capnp::POINTERS), size);
}
inline void UserInfo::Builder::adoptIdentityId(
    ::capnp::Orphan< ::capnp::Data>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::adopt(
      _builder.getPointerField(2 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Data> UserInfo::Builder::disownIdentityId() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::disown(
      _builder.getPointerField(2 * ::capnp::POINTERS));
}

inline bool UserInfo::Reader::hasPermissions() const {
  return !_reader.getPointerField(3 * ::capnp::POINTERS).isNull();
}
inline bool UserInfo::Builder::hasPermissions() {
  return !_builder.getPointerField(3 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List<bool>::Reader UserInfo::Reader::getPermissions() const {
  return ::capnp::_::PointerHelpers< ::capnp::List<bool>>::get(
      _reader.getPointerField(3 * ::capnp::POINTERS));
}
inline  ::capnp::List<bool>::Builder UserInfo::Builder::getPermissions() {
  return ::capnp::_::PointerHelpers< ::capnp::List<bool>>::get(
      _builder.getPointerField(3 * ::capnp::POINTERS));
}
inline void UserInfo::Builder::setPermissions( ::capnp::List<bool>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List<bool>>::set(
      _builder.getPointerField(3 * ::capnp::POINTERS), value);
}
inline void UserInfo::Builder::setPermissions(::kj::ArrayPtr<const bool> value) {
  ::capnp::_::PointerHelpers< ::capnp::List<bool>>::set(
      _builder.getPointerField(3 * ::capnp::POINTERS), value);
}
inline  ::capnp::List<bool>::Builder UserInfo::Builder::initPermissions(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List<bool>>::init(
      _builder.getPointerField(3 * ::capnp::POINTERS), size);
}
inline void UserInfo::Builder::adoptPermissions(
    ::capnp::Orphan< ::capnp::List<bool>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List<bool>>::adopt(
      _builder.getPointerField(3 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List<bool>> UserInfo::Builder::disownPermissions() {
  return ::capnp::_::PointerHelpers< ::capnp::List<bool>>::disown(
      _builder.getPointerField(3 * ::capnp::POINTERS));
}

inline bool UserInfo::Reader::hasPreferredHandle() const {
  return !_reader.getPointerField(4 * ::capnp::POINTERS).isNull();
}
inline bool UserInfo::Builder::hasPreferredHandle() {
  return !_builder.getPointerField(4 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader UserInfo::Reader::getPreferredHandle() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader.getPointerField(4 * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder UserInfo::Builder::getPreferredHandle() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder.getPointerField(4 * ::capnp::POINTERS));
}
inline void UserInfo::Builder::setPreferredHandle( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder.getPointerField(4 * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder UserInfo::Builder::initPreferredHandle(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder.getPointerField(4 * ::capnp::POINTERS), size);
}
inline void UserInfo::Builder::adoptPreferredHandle(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder.getPointerField(4 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> UserInfo::Builder::disownPreferredHandle() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder.getPointerField(4 * ::capnp::POINTERS));
}

inline  ::sandstorm::Profile::Pronouns UserInfo::Reader::getPronouns() const {
  return _reader.getDataField< ::sandstorm::Profile::Pronouns>(
      0 * ::capnp::ELEMENTS);
}

inline  ::sandstorm::Profile::Pronouns UserInfo::Builder::getPronouns() {
  return _builder.getDataField< ::sandstorm::Profile::Pronouns>(
      0 * ::capnp::ELEMENTS);
}
inline void UserInfo::Builder::setPronouns( ::sandstorm::Profile::Pronouns value) {
  _builder.setDataField< ::sandstorm::Profile::Pronouns>(
      0 * ::capnp::ELEMENTS, value);
}

inline bool UserInfo::Reader::hasPictureUrl() const {
  return !_reader.getPointerField(5 * ::capnp::POINTERS).isNull();
}
inline bool UserInfo::Builder::hasPictureUrl() {
  return !_builder.getPointerField(5 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader UserInfo::Reader::getPictureUrl() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader.getPointerField(5 * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder UserInfo::Builder::getPictureUrl() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder.getPointerField(5 * ::capnp::POINTERS));
}
inline void UserInfo::Builder::setPictureUrl( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder.getPointerField(5 * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder UserInfo::Builder::initPictureUrl(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder.getPointerField(5 * ::capnp::POINTERS), size);
}
inline void UserInfo::Builder::adoptPictureUrl(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder.getPointerField(5 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> UserInfo::Builder::disownPictureUrl() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder.getPointerField(5 * ::capnp::POINTERS));
}

inline bool UserInfo::Reader::hasIdentity() const {
  return !_reader.getPointerField(6 * ::capnp::POINTERS).isNull();
}
inline bool UserInfo::Builder::hasIdentity() {
  return !_builder.getPointerField(6 * ::capnp::POINTERS).isNull();
}
#if !CAPNP_LITE
inline  ::sandstorm::Identity::Client UserInfo::Reader::getIdentity() const {
  return ::capnp::_::PointerHelpers< ::sandstorm::Identity>::get(
      _reader.getPointerField(6 * ::capnp::POINTERS));
}
inline  ::sandstorm::Identity::Client UserInfo::Builder::getIdentity() {
  return ::capnp::_::PointerHelpers< ::sandstorm::Identity>::get(
      _builder.getPointerField(6 * ::capnp::POINTERS));
}
inline  ::sandstorm::Identity::Client UserInfo::Pipeline::getIdentity() {
  return  ::sandstorm::Identity::Client(_typeless.getPointerField(6).asCap());
}
inline void UserInfo::Builder::setIdentity( ::sandstorm::Identity::Client&& cap) {
  ::capnp::_::PointerHelpers< ::sandstorm::Identity>::set(
      _builder.getPointerField(6 * ::capnp::POINTERS), kj::mv(cap));
}
inline void UserInfo::Builder::setIdentity( ::sandstorm::Identity::Client& cap) {
  ::capnp::_::PointerHelpers< ::sandstorm::Identity>::set(
      _builder.getPointerField(6 * ::capnp::POINTERS), cap);
}
inline void UserInfo::Builder::adoptIdentity(
    ::capnp::Orphan< ::sandstorm::Identity>&& value) {
  ::capnp::_::PointerHelpers< ::sandstorm::Identity>::adopt(
      _builder.getPointerField(6 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::sandstorm::Identity> UserInfo::Builder::disownIdentity() {
  return ::capnp::_::PointerHelpers< ::sandstorm::Identity>::disown(
      _builder.getPointerField(6 * ::capnp::POINTERS));
}
#endif  // !CAPNP_LITE

}  // namespace

#endif  // CAPNP_INCLUDED_c822108a5c3d7d25_
