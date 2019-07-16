const path = require('path');
const outputDir = path.join(__dirname, "build/");
const HtmlWebpackPlugin = require('html-webpack-plugin');

const isProd = process.env.NODE_ENV === 'production';

module.exports = {
  entry: './src/Index.bs.js',
  mode: isProd ? 'production' : 'development',
  plugins: [
    new HtmlWebpackPlugin({
      template: 'src/index.html',
      inject: false
    })
  ],
  output: {
    path: outputDir,
    publicPath: outputDir,
    filename: 'Index.js',
  },
};
