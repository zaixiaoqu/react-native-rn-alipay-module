import { NativeModules } from 'react-native';
import { Alipay } from './lib';

const { RnAlipayModule } = NativeModules;

export default RnAlipayModule;
export {
    Alipay
};
