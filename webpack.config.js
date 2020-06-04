const path = require('path');

module.exports = {
  entry: path.resolve(__dirname, 'src/main/js/main.bs.js'),
  output: {
    filename: 'main.js',
    path: path.resolve(__dirname, 'src/main/resources/public/dist'),
  },
};