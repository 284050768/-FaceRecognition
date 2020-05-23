#ifndef STRUCTDEF_H_
#define STRUCTDEF_H_

#include <vector>
using namespace std;

typedef struct _stSFaceInfo
{
	int nID;			// 人脸id，检测的是图片时无效
	int nLeft;			// 人脸位置-左
	int nTop;			// 人脸位置-顶
	int nRight;			// 人脸位置-右
	int nBottom;		// 人脸位置-底
	int nAge;			// 年龄
	int nGender;		// 0:出错，1：男，2：女
	int n3dPitch;		// 人脸姿态Pitch
	int n3dRoll;		// 人脸姿态Roll
	int n3dYaw;			// 人脸姿态Yaw
	float fQuality;		// 人脸质量
	float fLiveScore;	// 活体检测得分
}SFaceInfo;

typedef struct _stFaceData
{
	int nCount;
	int nMax;
	SFaceInfo* pFace;
	void* pTemData;
}FaceData;

#endif // !STRUCTDEF_H_
