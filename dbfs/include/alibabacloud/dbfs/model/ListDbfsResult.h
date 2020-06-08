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

#ifndef ALIBABACLOUD_DBFS_MODEL_LISTDBFSRESULT_H_
#define ALIBABACLOUD_DBFS_MODEL_LISTDBFSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbfs/DBFSExport.h>

namespace AlibabaCloud
{
	namespace DBFS
	{
		namespace Model
		{
			class ALIBABACLOUD_DBFS_EXPORT ListDbfsResult : public ServiceResult
			{
			public:
				struct Info
				{
					std::string status;
					std::string category;
					std::string fsName;
					std::string zoneId;
					int sizeG;
					std::string dBFSClusterId;
					std::string fsId;
					std::string regionId;
					int attachNodeNumber;
					std::string payType;
				};


				ListDbfsResult();
				explicit ListDbfsResult(const std::string &payload);
				~ListDbfsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Info> getDBFSInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Info> dBFSInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_LISTDBFSRESULT_H_