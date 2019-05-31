/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/cloudauth/model/CreateAuthKeyRequest.h>

using AlibabaCloud::Cloudauth::Model::CreateAuthKeyRequest;

CreateAuthKeyRequest::CreateAuthKeyRequest() :
	RpcServiceRequest("cloudauth", "2018-09-16", "CreateAuthKey")
{}

CreateAuthKeyRequest::~CreateAuthKeyRequest()
{}

std::string CreateAuthKeyRequest::getBizType()const
{
	return bizType_;
}

void CreateAuthKeyRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setCoreParameter("BizType", bizType);
}

std::string CreateAuthKeyRequest::getUserDeviceId()const
{
	return userDeviceId_;
}

void CreateAuthKeyRequest::setUserDeviceId(const std::string& userDeviceId)
{
	userDeviceId_ = userDeviceId;
	setCoreParameter("UserDeviceId", userDeviceId);
}

std::string CreateAuthKeyRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateAuthKeyRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

bool CreateAuthKeyRequest::getTest()const
{
	return test_;
}

void CreateAuthKeyRequest::setTest(bool test)
{
	test_ = test;
	setCoreParameter("Test", test ? "true" : "false");
}

int CreateAuthKeyRequest::getAuthYears()const
{
	return authYears_;
}

void CreateAuthKeyRequest::setAuthYears(int authYears)
{
	authYears_ = authYears;
	setCoreParameter("AuthYears", std::to_string(authYears));
}

std::string CreateAuthKeyRequest::getLang()const
{
	return lang_;
}

void CreateAuthKeyRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

