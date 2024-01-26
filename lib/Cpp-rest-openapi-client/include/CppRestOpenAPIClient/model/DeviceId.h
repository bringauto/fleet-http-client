/**
 * Fleet v2 HTTP API
 * HTTP-based API for Fleet Protocol v2 serving for communication between the External Server and the end users.
 *
 * The version of the OpenAPI document: 2.1.0
 * Contact: jiri.strouhal@bringauto.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.2.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * DeviceId.h
 *
 * Id of the device described with an object.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_DeviceId_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_DeviceId_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Id of the device described with an object.
/// </summary>
class  DeviceId
    : public ModelBase
{
public:
    DeviceId();
    virtual ~DeviceId();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DeviceId members

    /// <summary>
    /// Id (unsigned integer) of the module containing the device.
    /// </summary>
    int32_t getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetModule_id();

    void setModuleId(int32_t value);

    /// <summary>
    /// Unsigned integer.
    /// </summary>
    int32_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(int32_t value);

    /// <summary>
    /// String description of the device role. It follows pattern ^[a-z0-9_]+$.
    /// </summary>
    utility::string_t getRole() const;
    bool roleIsSet() const;
    void unsetRole();

    void setRole(const utility::string_t& value);

    /// <summary>
    /// UTF-8 encoded string.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);


protected:
    int32_t m_Module_id;
    bool m_Module_idIsSet;
    int32_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Role;
    bool m_RoleIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_DeviceId_H_ */
