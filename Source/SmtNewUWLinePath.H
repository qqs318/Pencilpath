#ifndef __SMT_NEWUWLINEPATH_GEN_H__
#define __SMT_NEWUWLINEPATH_GEN_H__

// ����ƽ���̼ӹ�·��
#include "SmtAutoFinishGen.H"

class CSmartAutoFinishGen;

///////////////////////////////////////////
// CSmtNewUWLinePathGen: �������������澫���
//
class DLL_EXPORT CSmtNewUWLinePathGen : public CSmartAutoFinishGen
{
public :
	CSmtNewUWLinePathGen() ;
	virtual ~CSmtNewUWLinePathGen() ;
public :
	JDNC_UWLINE m_cParam ;
public :
	virtual int GeneratePathEx( CPathGroup&    NewPath  ,  /*���·��*/
								CSmartGraphic& Graph    ) ; /*���ͼ��*/
	BOOL CreatOneSurfPath(CSmartLoop* AllLoop, CGeoTrmSurf* pSurf,CPathGroup& NewPath);//���ɵ�����ļӹ�·��
	void CreatParamPath(CGeoTrmSurf* pSurf, CSmtCutPath& ParamPath, float fBox2d[2][2], int pCutDir);//���������·��
	void CreatStepPath(CSmtCutPath* ParamPath, CSmtCutPath& pNewPath);//����·���ڵ�����·�����Ĳ�����·��
	BOOL CreatFinalPath(CSmartLoop* AllLoop, CSmtCPathLib& AllPath, CSmtCutPath* pNewPath, CGeoTrmSurf* pSurf, float fBox2d[2][2], int pCutDir);//�������յ�����ӹ�·��
	void PathTrim(CSmartLoop* AllLoop, CGeoTrmSurf* pSurf,CSmtCutPointEx* ptFEnd[2], CSmtCPathLib& AllPath);//���ɷ��ϼӹ�����߽��·��
	void MappingPath(CSmtCutPath* pCutPath, CGeoTrmSurf* pSurf);//��������·�����������ͶӰ
	void MappingPnt(PNT2D ptOr, CGeoTrmSurf* pSurf, PNT3D ptSurf, VEC3D nor);//���������������ͶӰ
	void CalCLPt(PNT3D ptSurf, VEC3D nor, PNT3D ptCL);//���㵶���
};


#endif // __SMT_NEWUWLINEPATH_GEN_H__