# Volumetrics

## Map

- MainLevel



## BPs

- BP_Draw_Material_into_RT
  - Used For Noise RenderTarget Generation
  - Triggered By "Draw" Button



## Mtls

- M_PWNoiseGeneration_Inst
  - 3D Perlin/Worley Noise Generation



## Volumetric Fog/Light Shaft

1. UE光源自带的Light Shaft开关（Occlusion Method + Bloom Method）+ ExponentialHeightFog可以在PC上得到非常不错的Light Shaft效果（见Resource目录下的VolumetricFog.mp4），但是这种做法在Mobile上并不支持
2. 