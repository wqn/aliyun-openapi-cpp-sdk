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

#ifndef ALIBABACLOUD_VOD_MODEL_GETCATEGORIESREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETCATEGORIESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetCategoriesRequest : public RpcServiceRequest
			{

			public:
				GetCategoriesRequest();
				~GetCategoriesRequest();

				std::string getResourceOwnerId()const;
				void setResourceOwnerId(const std::string& resourceOwnerId);
				std::string getType()const;
				void setType(const std::string& type);
				long getCateId()const;
				void setCateId(long cateId);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				long getPageNo()const;
				void setPageNo(long pageNo);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);

            private:
				std::string resourceOwnerId_;
				std::string type_;
				long cateId_;
				long pageSize_;
				std::string resourceOwnerAccount_;
				std::string ownerId_;
				long pageNo_;
				std::string sortBy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETCATEGORIESREQUEST_H_