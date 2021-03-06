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

#ifndef ALIBABACLOUD_IVISION_MODEL_SEARCHFACERESULT_H_
#define ALIBABACLOUD_IVISION_MODEL_SEARCHFACERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ivision/IvisionExport.h>

namespace AlibabaCloud
{
	namespace Ivision
	{
		namespace Model
		{
			class ALIBABACLOUD_IVISION_EXPORT SearchFaceResult : public ServiceResult
			{
			public:
				struct Rect
				{
					int left;
					int top;
					int height;
					int width;
				};
				struct FaceResult
				{
					std::string faceToken;
					float probability;
				};


				SearchFaceResult();
				explicit SearchFaceResult(const std::string &payload);
				~SearchFaceResult();
				Rect getRect()const;
				std::vector<FaceResult> getFaceResults()const;
				std::string getGroupId()const;

			protected:
				void parse(const std::string &payload);
			private:
				Rect rect_;
				std::vector<FaceResult> faceResults_;
				std::string groupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVISION_MODEL_SEARCHFACERESULT_H_