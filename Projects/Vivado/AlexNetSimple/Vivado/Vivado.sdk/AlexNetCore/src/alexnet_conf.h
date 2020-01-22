#ifndef SRC_ALEXNET_CONF_H_
#define SRC_ALEXNET_CONF_H_

#define LAYERS_NUMBER 11

LayerConf LAYERS_CONF[] = {
	{
		.layerType = Conv,
		.kernelSize = 11,
		.stride = 4,
		.padding = 2,
		.din = 3,
		.hin = 224,
		.win = 224,
		.dout = 64,
	},
	{
		.layerType = Maxpool,
		.kernelSize = 3,
		.stride = 2,
	},
	{
		.layerType = Conv,
		.kernelSize = 5,
		.stride = 1,
		.padding = 2,
		.dout = 192,
	},
	{
		.layerType = Maxpool,
		.kernelSize = 3,
		.stride = 2,
	},
	{
		.layerType = Conv,
		.kernelSize = 3,
		.stride = 1,
		.padding = 1,
		.dout = 384,
	},
	{
		.layerType = Conv,
		.kernelSize = 3,
		.stride = 1,
		.padding = 1,
		.dout = 256,
	},
	{
		.layerType = Conv,
		.kernelSize = 3,
		.stride = 1,
		.padding = 1,
		.dout = 256,
	},
	{
		.layerType = Maxpool,
		.kernelSize = 3,
		.stride = 2,
	},
	{
		.layerType = LinearReLU,
		.outFeatures = 4096,
	},
	{
		.layerType = LinearReLU,
		.outFeatures = 4096,
	},
	{
		.layerType = Linear,
		.outFeatures = 1000,
	},
};

#endif /* SRC_ALEXNET_CONF_H_ */
