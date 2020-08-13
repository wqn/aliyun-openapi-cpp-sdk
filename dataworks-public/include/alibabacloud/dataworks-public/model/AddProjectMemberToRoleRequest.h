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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_ADDPROJECTMEMBERTOROLEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_ADDPROJECTMEMBERTOROLEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT AddProjectMemberToRoleRequest : public RpcServiceRequest
			{

			public:
				AddProjectMemberToRoleRequest();
				~AddProjectMemberToRoleRequest();

				std::string getRoleCode()const;
				void setRoleCode(const std::string& roleCode);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				long getProjectId()const;
				void setProjectId(long projectId);
				std::string getUserId()const;
				void setUserId(const std::string& userId);

            private:
				std::string roleCode_;
				std::string clientToken_;
				long projectId_;
				std::string userId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_ADDPROJECTMEMBERTOROLEREQUEST_H_