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

#include <alibabacloud/alidns/model/UnbindInstanceDomainsRequest.h>

using AlibabaCloud::Alidns::Model::UnbindInstanceDomainsRequest;

UnbindInstanceDomainsRequest::UnbindInstanceDomainsRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "UnbindInstanceDomains")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindInstanceDomainsRequest::~UnbindInstanceDomainsRequest()
{}

std::string UnbindInstanceDomainsRequest::getDomainNames()const
{
	return domainNames_;
}

void UnbindInstanceDomainsRequest::setDomainNames(const std::string& domainNames)
{
	domainNames_ = domainNames;
	setCoreParameter("DomainNames", domainNames);
}

std::string UnbindInstanceDomainsRequest::getInstanceId()const
{
	return instanceId_;
}

void UnbindInstanceDomainsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string UnbindInstanceDomainsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void UnbindInstanceDomainsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string UnbindInstanceDomainsRequest::getLang()const
{
	return lang_;
}

void UnbindInstanceDomainsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}
