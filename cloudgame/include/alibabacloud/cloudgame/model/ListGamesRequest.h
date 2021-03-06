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

#ifndef ALIBABACLOUD_CLOUDGAME_MODEL_LISTGAMESREQUEST_H_
#define ALIBABACLOUD_CLOUDGAME_MODEL_LISTGAMESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudgame/CloudgameExport.h>

namespace AlibabaCloud
{
	namespace Cloudgame
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDGAME_EXPORT ListGamesRequest : public RpcServiceRequest
			{

			public:
				ListGamesRequest();
				~ListGamesRequest();

				std::string getOrderKey()const;
				void setOrderKey(const std::string& orderKey);
				std::string getSortType()const;
				void setSortType(const std::string& sortType);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);

            private:
				std::string orderKey_;
				std::string sortType_;
				int pageNumber_;
				int pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDGAME_MODEL_LISTGAMESREQUEST_H_