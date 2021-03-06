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

#include <alibabacloud/devops-rdc/model/CreateDevopsProjectRequest.h>

using AlibabaCloud::Devops_rdc::Model::CreateDevopsProjectRequest;

CreateDevopsProjectRequest::CreateDevopsProjectRequest() :
	RpcServiceRequest("devops-rdc", "2020-03-03", "CreateDevopsProject")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDevopsProjectRequest::~CreateDevopsProjectRequest()
{}

std::string CreateDevopsProjectRequest::getName()const
{
	return name_;
}

void CreateDevopsProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateDevopsProjectRequest::getDescription()const
{
	return description_;
}

void CreateDevopsProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateDevopsProjectRequest::getOrgId()const
{
	return orgId_;
}

void CreateDevopsProjectRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

